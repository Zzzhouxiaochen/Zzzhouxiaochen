//����������������С�������ָ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void qwe(int* p1, int* p2)  //ָ�����������
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
	printf("�������%d\nС����:%d\n", *q, *q1);
	system("pause");
	return 0;
}