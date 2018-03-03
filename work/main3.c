#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 1000

int main()
{
	char str[SIZE] = { 0 };
	
	printf("Please, enter a line:\n");
	fgets(str, SIZE - 1, stdin);

	if (str[strlen(str) - 1] == '\n')
	{
		str[strlen(str) - 1] = '\0';
	}

	isPalindrome(str);
	if (isPalindrome(str) == 0)
		printf("Is palindrome\n");
	else 
		printf("Is not palindrome\n");
	return 0;
}