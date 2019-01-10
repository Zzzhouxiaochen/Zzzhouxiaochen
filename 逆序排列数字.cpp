#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, m, n, temp;
	int a[5];
	printf("请输入相应的数据：");
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for ( i = 0; i < 2; i++)
	{
		temp = a[i];
		a[i]=a[4 - i];
		a[4 - i]=temp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d,", a[i]);
	}
	system("pause");
	return 0;
}