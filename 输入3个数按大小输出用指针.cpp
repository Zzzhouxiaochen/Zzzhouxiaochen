//����3����������С�������ָ��
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
	printf("�������%d\n�ڶ������:%d\n��С����%d\n", *p, *p1,*p2);
	system("pause");
	return 0;
}