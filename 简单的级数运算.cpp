#define _CRT_SECURE_NO_WARNINGS  //Ϊ���scanf��������ȫ�ľ�������
#include<stdio.h>
#include<stdlib.h>


int main()
{
	float i, t;
	float a = 2, b = 1, sum = 0;
	for (i = 0; i < 20; i++)
	{
		sum = sum + a / b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("sum=%f", sum);
	system("pause");
	return 0;
}
