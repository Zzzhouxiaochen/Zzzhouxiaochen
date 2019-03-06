#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int i,j;
	for ( i = 0; i < 101; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if ((i%j) == 0)
				break;
		}
		if (i == j)
			printf("%d  ", i);
	}
	system("pause");
	return 0;
}