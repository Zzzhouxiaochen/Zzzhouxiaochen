
#define _CRT_SECURE_NO_WARNINGS  //Ϊ���scanf��������ȫ�ľ�������
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i = 2, n;
	float sum = 1;
	printf("����������׳�n��ֵ��");
	scanf("%d", &n);
	if (n == 1 || n == 0)
	{
		printf("�׳˽��Ϊ1��");
		return 0;
	}
	while (i <= n)
	{
		sum = sum*i;
		i++;
	}
	printf("�׳˵Ľ���ǣ�%f", sum);
	system("pause");
	return 0;
}

