#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int i,k,j;
	int a[11];
	printf("������ʮ�����֣�\n");
	for (i = 0; i < 11; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 1; j <= 9; j++) //��������
	{
		for (i = 1; i < 10 - j; i++) //ÿ�ν�������
		{
			if (a[i] > a[i + 1])
			{
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
		}
	}
	printf("����֮��Ľ����\n");
	for (i = 1; i < 11; i++)
	{
		printf("%5d", a[i]);
	}
	system("pause");
	return 0;
}