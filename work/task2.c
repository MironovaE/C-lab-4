#include <stdio.h>
#include <string.h>
#include "task2.h"
#define N 30
#define IN 1
#define OUT 0

char *buf[N]; //массив указателей
int flag = OUT;
int i = 0, j = 0; 
int count = 0;

char * reverseWords(char * in, char *out)// функция, переворачивающая слова из in и записывающую их в out
{
	int cn = 0; // "буква слова" в одном элементе в массиве указателей 
	while (j)	//  счетчик количества слов в out
	{
		if (buf[count][cn] != '\0' && buf[count][cn] != ' ' && flag == OUT)//вне слова
		{
			out[i] = buf[count][cn];
			i++;		// счетчик элементов в out
			cn++;		// счетчик элементов count в buf
			flag = IN;	//вошли в слово
		}
		else if (buf[count][cn] != '\0' && buf[count][cn] != ' ' && flag == IN)// в слове (заполнение слова)
		{
			out[i] = buf[count][cn];
			i++;
			cn++;	
		}
		else if ((buf[count][cn] == '\0' || buf[count][cn] == ' ') && flag == IN && (j > 1))// вне слова (после слова, когда встречаем пробел, а строка еще не закончилась)
		{
			out[i] = ' ';
			i++;
			j--;
			cn = 0; 
			count--;
			flag = OUT; // вышли из слова
		}
		else if ((buf[count][cn] == '\0' || buf[count][cn] == ' ') && (j = 1))//вне слова(после слова, когда встречаем пробел, а строка уже закончилась)
		{
			out[i] = '\0';
		//	i++;
		//	cn = 0; 
			j--;
			flag = OUT; // вышли из слова
		}
	}
	return out;
}

int word(char in[N], char out[N])//нахождение слова и запись адреса первых символов каждого слова
{
	while (in[i])
		{
			if (in[i] != ' ' && flag == OUT)
			{
				buf[j] = &in[i];
				j++;		// счетчик элементов в buf и счетчик количества слов в in
				flag = IN;	//вошли в слово
			}
			else if (in[i] == ' ' && flag == IN)
			{
				flag = OUT; // вышли из слова
				count++;	//счетчик индекса элемента;
			}
			i++;
		}
		flag = OUT;
		i = 0;
		return buf;
}
