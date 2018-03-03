#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int compare(const void *a, const void *b)
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;
}

void lineSort(char *str[], int size)//функция, сортирующая массив указателей
{
	qsort(str, size, sizeof(char*), compare);
}

void printLines(const char *str[], int size)//функция, печатающая строки в порядке массива str
{
	for (int i = 0; i < size; i++)
		printf("%s", str[i]);
}