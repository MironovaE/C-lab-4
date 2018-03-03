#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	char in[SIZE] = { 0 };
	char out[SIZE] = { 0 };

	printf("Please, enter a line:\n");
	fgets(in, SIZE, stdin);
	if (in[strlen(in) - 1] == '\n')
	{
		in[strlen(in) - 1] = '\0';
	}

	word(in);
	reverseWords(in, out);

	printf("%s\n", out);

	return 0;
}