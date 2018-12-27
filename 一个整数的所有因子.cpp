#define _CRT_SECURE_NO_WARNINGS  //为解决scanf函数不安全的警告问题
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i, n;
	printf("请输入所要求的数字：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
			printf("%d,", i);
	}
	system("pause");
	return 0;
}
