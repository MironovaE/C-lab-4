#include <stdio.h>
#include <string.h>
#include "task2.h"
#define M 1000

int main()
{
	char in[M] = { 0 };
	char out[M] = { 0 };

	printf("Please, enter a line:\n");
	fgets(in, M, stdin);
	if (in[strlen(in) - 1] == '\n')
	{
		in[strlen(in) - 1] = '\0';
	}

	word(in);
	reverseWords(in, out);

	printf("%s\n", out);

	return 0;
}