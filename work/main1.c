#include <stdio.h>
#include <string.h>
#include "task1.h"
#define N 21

int main()
{
	char buf[N][N];
	char *str[N] = { 0 };
	int i = 0;

	printf("Please, enter no more than 20 lines:\n");

	while (buf[i - 1][0] != '\n' && i != 20)// ���� �� ����� ������� ������ ������ � ��������� "\n" � �������� 0
	{
		fgets(buf[i], N, stdin);

		str[i] = &buf[i];

		i++;

	}

	buf[i - 1][0] = '\0';
	str[i - 1] = &buf[i - 1];

	lineSort(str, i);
	printLines(str, i);

	return 0;
}

