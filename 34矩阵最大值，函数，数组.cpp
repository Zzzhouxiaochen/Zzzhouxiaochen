#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int competer(int a[][4])
{
	int i, max, j,t=0;
	max = a[0][0];
	for ( i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		    if (max < a[i][j])max = a[i][j];
		return max;
}

int main()
{
	int i, j;
	int b[3][4];
	printf("请输入数组数据：\n");
	for ( i = 0; i < 3; i++)
	{
		for ( j= 0; j < 4; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	competer(b);
	printf("最大数是：%d\n", competer(b));
	system("pause");
	return 0;
}

