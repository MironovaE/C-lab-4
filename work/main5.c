#include <stdio.h>
#define NAME 150
#define SIZE 20

int main()
{
	int namber = 0;
	char *young, *old;
	int inAge = 0;	// Ввод текущего возраста
	int youngAge, oldAge;//Хранение минимального возраста,Хранение максимального возраста
	char arr[SIZE][NAME] = { 0 };

	printf("Enter the number of relatives:\n");
	scanf("%d", &namber);
	for (int i = 0; i < namber; i++)
	{
			printf("Enter the name of the relative and his age (in the format: \"name - age\")\n");
			scanf("%s - %d", arr[i], &inAge);
		
				if (i == 0)
				{
					young = arr[i];
					old = arr[i];
					youngAge = inAge;
					oldAge = inAge;
				}
				else
				{
					if (inAge > oldAge)
					{
						old = arr[i];
						oldAge = inAge;
					}
					else if (inAge < youngAge)
					{
						young = arr[i];
						youngAge = inAge;
					}
				}
			}
			
	printf("The youngest: \"%s\" has an age: %d\n", young, youngAge);
	printf("The oldest: \"%s\" has an age: %d\n", old, oldAge);
	return 0;
}