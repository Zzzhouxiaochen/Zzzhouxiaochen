#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[20], max, min, i, j=0, k=0, n;
	printf("���������ݸ�����\n");
	scanf("%d", &n);
	printf("���������ݣ�\n");
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	min = a[0];   //����С��
	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			j = i;
		}
	}
	max = a[0];      //�������
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			k = i;
		}
	}
	a[k] = min;  //�����λ�÷���С��
	a[j] = max;  //��С���������
	printf("��С��λ����%d��\n", j);
	printf("�����λ����%d��\n", k);
	printf("��������Ϊ��\n");
	for ( i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	system("pause");
	return 0;
}