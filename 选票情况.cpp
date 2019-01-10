#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i;
	int a=0, b=0, c=0, d=0, n;
	int m[20];
	printf("请输入票的个数：");
	scanf("%d", &n);
	printf("统计票的情况：");
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &m[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (m[i] == 1)  //a
			a++;
		if (m[i] == 2)  //b
			b++;
		if (m[i] == 3)  //c
			c++;
		if (m[i] == 4)  //无效票
			d++;
	}
	printf("a=%d,b=%d,c=%d,d=%d", a, b, c,d);
	system("pause");
	return 0;
}