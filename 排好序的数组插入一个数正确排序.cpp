#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int i, j;
	int k, q;

	scanf("%d", &k); //输入一个数

	int a[10] = { 0, 2, 4, 6, 9, }; //初始化数组
	int b[10];//用于存放a数组的中的值
	for (i = 0; i<10; i++)
		b[i] = a[i];

	for (i = 0; i<10; i++)
	{
		if (k>a[i] && k<a[i + 1])  //比较输入的数在数组哪个位置中
		{
			q = i + 1;
			a[q] = k; //将输入的数插入数组中
			for (j = q + 1; j<10; j++)   // 利用b数组将后面的数写入a数组
				a[j] = b[j - 1];
		}
	}


	for (i = 0; i<10; i++) //插入后输出数组
		printf("%3d", a[i]);
	system("pause");
	return 0;
}