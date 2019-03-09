//输入3个数，按大小输出，用指针
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

void change(int* q, int* q1, int* q2)
{
	if (*q < *q1)qwe(q, q1);
	if (*q < *q2)qwe(q, q2);
	if (*q1 < *q2)qwe(q1, q2);
}
int main()
{
	int a, b,c;
	int* p, *p1,*p2;
	scanf("%d %d %d", &a, &b,&c);
	p = &a, p1 = &b,p2=&c;
	change(p, p1, p2);
	printf("大的数：%d\n第二大的数:%d\n最小数：%d\n", *p, *p1,*p2);
	system("pause");
	return 0;
}