#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//选择法：比较得到最小数和a[0]，交换，剩下的的到最小数和a[1]交换，共得到九轮
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
	printf("请输入数组数据：\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &b[i]);
	sort(b, 10);
	printf("数组排序是：\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d  ", b[i]);
	}
	system("pause");
	return 0;
}

