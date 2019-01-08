#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	scanf("%d", &i);
	for ( j = 1; j <= i; j++)
	{
		if (i%j == 0)
			printf("%d,", j);
	}
	system("pause");
	return 0;
}