#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#include "task1.c"
#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#define N 100

int main()
{
	char buf[N][N] = { 0 };
	
	FILE *fp, *in;
	in = fopen("reading.txt", "rt");
	fp = fopen("letter.txt", "wt");
	if (in == NULL)
	{
		puts("File not found!");
		return 1;
	}
	char *pstr[N];
	int j = 0; // количество строк
	while (fgets(buf[j], N, in))
	{
		pstr[j] = *(buf + j);
		if (buf[j][strlen(buf[j]) - 1] == '\n')
			buf[j][strlen(buf[j]) - 1] = '\0';
		j++;
	}

	lineSort(pstr, j);
	printLinesToFile((const char**)pstr, j, fp);
	return 0;
}

