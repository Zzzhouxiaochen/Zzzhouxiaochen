#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//����Ԫ�ؽ����ŵ���һ��������
int main()
{
	int i, k, j;
	int a[2][3] = { 1, 2, 3, 4, 5, 6 };
	int b[3][2];
	printf("����1��\n");
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("����2:\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			printf("%5d", b[j][i]);
			
		}
		printf("\n");
	}


	system("pause");
	return 0;
}