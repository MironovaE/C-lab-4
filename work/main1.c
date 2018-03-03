#include <stdio.h>
#include <string.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS 
#define N 21

int main()
{
	char buf[N][N];
	char *pstr[N];
	int i = 0;

	printf("Please, enter no more than 20 lines:\n");

	while (buf[i - 1][0] != '\n' && i <= 20)// пока не будет введена пустая строка с элементом "\n" и размером 0
	{
		pstr[i] = fgets(buf[i], N, stdin);

		i++;

	}

	lineSort(pstr, i);
	printLines(pstr, i);

	return 0;
}

