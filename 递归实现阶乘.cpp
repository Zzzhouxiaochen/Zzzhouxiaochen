#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

float fac(int n)
{
	float f;
	if (n < 0)
		printf("输入错误！");
	else if ((n == 0) || (n== 1))
		f = 1;
	else 
		f = fac(n - 1)*n;
	return f;
}

int main()
{
	int n;
	float y;
	printf("请输入数值：");
	scanf("%d", &n);
	y = fac(n);
	printf("%d!=%10.0f", n, y);

	system("pause");
	return 0;
}