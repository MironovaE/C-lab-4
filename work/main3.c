#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 100

int main()
{
	char str[SIZE] = { 0 };
	
	printf("Please, enter a line:\n");
	fgets(str, SIZE - 1, stdin);

	isPalindrome(str);
	if (isPalindrome(str) == 1)
		printf("Is palindrome\n");
	else 
		printf("Is not palindrome\n");
	return 0;
}