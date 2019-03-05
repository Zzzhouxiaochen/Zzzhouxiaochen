#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	char a[][5] = { { ' ', ' ', '*' }, { ' ', '*', ' ', '*' }, { '*', ' ', ' ', ' ', '*' }, { ' ', '*', ' ', '*' }, { ' ', ' ', '*' } };
	int i, j;
	for ( i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}