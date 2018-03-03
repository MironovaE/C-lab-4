#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS 
#define N 21

int main()
{
	char buf[N][N];
	char *pstr[N];
	int j = 0;

	printf("Please, enter no more than 20 lines:\n");
	do
	{
		pstr[j] = fgets(buf[j], N - 1, stdin);
		j++;
	} while (buf[j - 1][0] != '\n' && j < N);// пока не будет введена пустая строка с элементом "\n" и размером 0

	lineSort(pstr, j);
	printLines((const char**)pstr, j);

	return 0;
}

