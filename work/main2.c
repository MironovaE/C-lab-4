#include <stdio.h>
#include <string.h>
#include "task2.h"
#define SIZEM 1000

int main()
{
	char in[SIZEM] = { 0 };
	char out[SIZEM] = { 0 };

	printf("Please, enter a line:\n");
	fgets(in, SIZEM, stdin);
	if (in[strlen(in) - 1] == '\n')
	{
		in[strlen(in) - 1] = '\0';
	}

	word(in);
	reverseWords(in, out);

	printf("%s\n", out);

	return 0;
}