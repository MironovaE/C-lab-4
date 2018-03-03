#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS 
#define SIZE 1000

int main()
{
	char buf[SIZE][SIZE];
	char *pstr[SIZE];
	int j = 0;

	printf("Please, enter no more than 20 lines:\n");
	do
	{
		pstr[j] = fgets(buf[j], SIZE - 1, stdin);
		j++;
	} while (buf[j - 1][0] != '\n' && j < SIZE);// пока не будет введена пустая строка с элементом "\n" и размером 0

	lineSort(pstr, j);
	printLines((const char**)pstr, j);

	return 0;
}

