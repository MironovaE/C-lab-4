#include <stdio.h>
#include <string.h>
#include "task2.h"
#define SIZE 1000
#define IN 1
#define OUT 0

char *buf[SIZE]; //������ ����������
int flag = OUT;
int i = 0, j = 0; 
int count = 0;

char * reverseWords(char * in, char *out)// �������, ���������������� ����� �� in � ������������ �� � out
{
	int cn = 0; // "����� �����" � ����� �������� � ������� ���������� 
	while (j)	//  ������� ���������� ���� � out
	{
		if (buf[count][cn] != '\0' && buf[count][cn] != ' ' && flag == OUT)//��� �����
		{
			out[i] = buf[count][cn];
			i++;		// ������� ��������� � out
			cn++;		// ������� ��������� count � buf
			flag = IN;	//����� � �����
		}
		else if (buf[count][cn] != '\0' && buf[count][cn] != ' ' && flag == IN)// � ����� (���������� �����)
		{
			out[i] = buf[count][cn];
			i++;
			cn++;	
		}
		else if ((buf[count][cn] == '\0' || buf[count][cn] == ' ') && flag == IN && (j > 1))// ��� ����� (����� �����, ����� ��������� ������, � ������ ��� �� �����������)
		{
			out[i] = ' ';
			i++;
			j--;
			cn = 0; 
			count--;
			flag = OUT; // ����� �� �����
		}
		else if ((buf[count][cn] == '\0' || buf[count][cn] == ' ') && (j == 1))//��� �����(����� �����, ����� ��������� ������, � ������ ��� �����������)
		{
			out[i] = '\0';
			j--;
			flag = OUT; // ����� �� �����
		}
	}
	return out;
}

void word(char *in) //���������� ����� � ������ ������ ������ �������� ������� �����
{
	while (in[i])
		{
			if (in[i] != ' ' && flag == OUT)
			{
				buf[j] = &in[i];
				j++;		// ������� ��������� � buf � ������� ���������� ���� � in
				flag = IN;	//����� � �����
			}
			else if (in[i] == ' ' && flag == IN)
			{
				flag = OUT; // ����� �� �����
				count++;	//������� ������� ��������;
			}
			i++;
		}
		flag = OUT;
		i = 0;
}
