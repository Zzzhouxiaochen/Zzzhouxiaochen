#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//ѡ�񷨣��Ƚϵõ���С����a[0]��������ʣ�µĵĵ���С����a[1]���������õ�����
void sort(int a[], int n)
{
	int i,j,k,l;
	for ( i = 0; i < n-1; i++)
	{
		k = i;
		for ( j = i+1; j < n; j++)
			if (a[j] < a[k])k = j;
		l = a[k]; a[k] = a[i]; a[i] = l;
	}
}
int main()
{
	int b[10], i;
	printf("�������������ݣ�\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &b[i]);
	sort(b, 10);
	printf("���������ǣ�\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d  ", b[i]);
	}
	system("pause");
	return 0;
}

