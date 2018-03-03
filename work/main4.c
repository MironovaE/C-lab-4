#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.c"
#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#define N 100

int main()
{
	char buf[N][N] = { 0 };
	
	FILE *fp, *in;
	fp = fopen("reading.txt", "rt");
	in = fopen("letter.txt", "wt");
	if (fp == NULL)
	{
		puts("File not found!");
		return 1;
	}
	char *pstr[N];
	int i = 0; // количество строк
	while (fgets(buf[i], N, fp))
	{
		pstr[i] = *(buf + i);
		if (buf[i][strlen(buf[i]) - 1] == '\n')
			buf[i][strlen(buf[i]) - 1] = '\0';
		i++;
	}
	lineSort(pstr, i);
	printLinesToFile(pstr, i, in);
	return 0;
}

