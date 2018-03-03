#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS 
#define N 21

int main()
{
	char buf[N][N];
	const char *pstr[N];
	int j = 0;

	printf("Please, enter no more than 20 lines:\n");

	while (buf[j - 1][0] != '\n' && j <= 20)// пока не будет введена пустая строка с элементом "\n" и размером 0
	{
		pstr[j] = fgets(buf[j], N - 1, stdin);

		j++;

	}

	lineSort(pstr, j);
	printLines(pstr, j);

	return 0;
}

