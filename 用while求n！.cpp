
#define _CRT_SECURE_NO_WARNINGS  //为解决scanf函数不安全的警告问题
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i = 2, n;
	float sum = 1;
	printf("请输入所求阶乘n的值：");
	scanf("%d", &n);
	if (n == 1 || n == 0)
	{
		printf("阶乘结果为1！");
		return 0;
	}
	while (i <= n)
	{
		sum = sum*i;
		i++;
	}
	printf("阶乘的结果是：%f", sum);
	system("pause");
	return 0;
}

