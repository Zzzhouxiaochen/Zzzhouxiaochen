//输入两个数，按大小输出，用指针
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


int main()
{
	int a, b;
	int* p1, *p2, *p;
	printf("请输入两个数：\n");
	scanf("%d %d", &a, &b);
	p1 = &a; 
	p2 = &b;
	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("大的值：%d\n小的值是：%d\n", *p1, *p2);
	system("pause");
	return 0;
}