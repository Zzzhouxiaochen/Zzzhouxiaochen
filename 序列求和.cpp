#define _CRT_SECURE_NO_WARNINGS  //为解决scanf函数不安全的警告问题
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i = 1;
	int n;
	double sum = 0;
	printf("n的值：");
	scanf("%d", &n);
	while (i <= n)
	{
		sum = sum + 1.0 / i;
		i++;
	}
	printf("sum=%lf", sum);
	system("pause");
	return 0;
}
