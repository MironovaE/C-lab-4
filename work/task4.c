#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#include "task4.h"

void printLinesToFile(const char *str[], int size, FILE *fp) 
{	
	for (int i = 0; i < size; i++)

		fprintf(fp, "%s\n", str[i]);
}