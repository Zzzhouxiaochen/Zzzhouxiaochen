#define _CRT_SECURE_NO_WARNINGS  //Ϊ���scanf��������ȫ�ľ�������
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i, n;
	printf("��������Ҫ������֣�");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
			printf("%d,", i);
	}
	system("pause");
	return 0;
}
