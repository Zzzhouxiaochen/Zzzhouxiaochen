#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[5], b[5],i;
	for (i = 0; i < 5; i++)  //�������ݸ�a����
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= 5; i++)  //���ڵ����ݸ�B������
	{
		b[i] = a[i] + a[i - 1];
	}
	for ( i = 1; i <= 4; i++)  //��ӡb����
	{
		printf("%3d,", b[i]);
	}
	system("pause");
	return 0;
}