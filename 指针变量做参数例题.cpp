//输入两个数，按大小输出，用指针
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void qwe(int* p1, int* p2)  //指针变量做参数
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a, b;
	int* q, *q1;
	scanf("%d %d", &a, &b);
	q = &a, q1 = &b;
	if (a < b)
		qwe(q, q1);
	printf("大的数：%d\n小的数:%d\n", *q, *q1);
	system("pause");
	return 0;
}