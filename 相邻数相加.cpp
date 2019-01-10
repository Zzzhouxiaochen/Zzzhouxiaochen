#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[5], b[5],i;
	for (i = 0; i < 5; i++)  //输入数据给a数组
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= 5; i++)  //相邻的数据给B数组中
	{
		b[i] = a[i] + a[i - 1];
	}
	for ( i = 1; i <= 4; i++)  //打印b数组
	{
		printf("%3d,", b[i]);
	}
	system("pause");
	return 0;
}