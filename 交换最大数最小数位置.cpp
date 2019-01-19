#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[20], max, min, i, j=0, k=0, n;
	printf("请输入数据个数：\n");
	scanf("%d", &n);
	printf("请输入数据：\n");
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	min = a[0];   //求最小数
	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			j = i;
		}
	}
	max = a[0];      //求最大数
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			k = i;
		}
	}
	a[k] = min;  //最大数位置放最小数
	a[j] = max;  //最小数放最大数
	printf("最小数位置是%d。\n", j);
	printf("最大数位置是%d。\n", k);
	printf("现在数据为：\n");
	for ( i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	system("pause");
	return 0;
}