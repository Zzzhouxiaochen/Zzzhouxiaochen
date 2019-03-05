#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int i=0;
	int a[20] = { 1, 1 };
	for (i = 2; i < 20; i++)
		a[i] = a[i - 2] + a[i - 1];
	for ( i = 0; i < 20; i++)
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}
		printf("%12d", a[i]);
	}
	system("pause");
	return 0;
}