#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int large(int x, int y)
{
	int flag;
	int a[10], b[10];
	int i = 0, n = 0;
	if (x > y)flag = 1;
	else if (large(a[i], b[i]) == 1)n = n + 1;
	else flag = 0;
	return(flag);
}
int main()
{
	int a[10], b[10], i, n = 0, m = 0, k = 0;
	printf("��������������a��\n");
	for (i = 0; i < 10; i++)
		scanf("%d", a);
	printf("\n");
	printf("��������������b��\n");
	for (i = 0; i < 10; i++)
		scanf("%d", b);
	printf("\n");
	for ( i = 0; i < 10; i++)
	{
		if (large(a[i], b[i]) == 0)n = n + 1;
		else if (large(a[i], b[i]) == 0)m = m + 1;
		else k = k + 1;
		printf("a[i]>b[i]%d����\na[i]=b[i]%d����\na[i]<b[i]%d����\n", n, m, k);
		if (n>k)
			printf("a����ϴ���b!\n");
		else if (n<k)
			printf("a�����С��b!\n");
		else
			printf("a���������b!\n");
	}
	system("pause");
	return 0;
}

