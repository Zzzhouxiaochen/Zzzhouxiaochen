//����������������С�������ָ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


int main()
{
	int a, b;
	int* p1, *p2, *p;
	printf("��������������\n");
	scanf("%d %d", &a, &b);
	p1 = &a; 
	p2 = &b;
	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("���ֵ��%d\nС��ֵ�ǣ�%d\n", *p1, *p2);
	system("pause");
	return 0;
}