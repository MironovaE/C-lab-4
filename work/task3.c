//#include <stdio.h>
#include <string.h>
#include "task3.h"

int isPalindrome(char * str)//�������, ����������� str (����� ���� 0, ���� 1)
{
	char *i = str;
	char *j = str + (strlen(str) - 1);

	while (*i)
	{
		{
			if (*i == ' ')
				i++;
			if (*j == ' ')
				j--;
		}

		if (*i == *j)
		{
			i++;
			j--;
		}

		else
			return 0;
	}

	return 1;
}


