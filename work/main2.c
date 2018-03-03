#include <stdio.h>
#include <string.h>
#include "task2.h"
#define N 30

int main()
{
	char in[N] = { 0 };
	char out[N] = { 0 };

	printf("Please, enter a line:\n");
	fgets(in, N, stdin);
	if (in[strlen(in) - 1] == '\n')
	{
		in[strlen(in) - 1] = '\0';
	}

	word(in);
	reverseWords(in, out);

	printf("%s\n", out);

	return 0;
}