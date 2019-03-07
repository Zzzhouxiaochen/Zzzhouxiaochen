#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int large(int x, int y)
{
	int flag;
	int a[10], b[10];
	int i = 0, n = 0;
	if (x > y)flag = 1;
	else if (large(a[i], b[i]) == 1)n = n + 1;
	else flag = 0;
	return(flag);
}
int main()
{
	int a[10], b[10], i, n = 0, m = 0, k = 0;
	printf("请输入数组数据a：\n");
	for (i = 0; i < 10; i++)
		scanf("%d", a);
	printf("\n");
	printf("请输入数组数据b：\n");
	for (i = 0; i < 10; i++)
		scanf("%d", b);
	printf("\n");
	for ( i = 0; i < 10; i++)
	{
		if (large(a[i], b[i]) == 0)n = n + 1;
		else if (large(a[i], b[i]) == 0)m = m + 1;
		else k = k + 1;
		printf("a[i]>b[i]%d次数\na[i]=b[i]%d次数\na[i]<b[i]%d次数\n", n, m, k);
		if (n>k)
			printf("a数组较大与b!\n");
		else if (n<k)
			printf("a数组较小与b!\n");
		else
			printf("a数组等于与b!\n");
	}
	system("pause");
	return 0;
}

