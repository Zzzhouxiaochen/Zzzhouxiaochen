#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int i, max, j, hang = 0, lie = 0;
	int a[3][4] = { 12, 42, 5, 35, 2, 61, 6, 73, 8, 3, 51, 9 };
	max=a[0][0] ;
	for (i = 0; i <= 2; i++)	
	{
		for (j = 0; j <= 3; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				hang = i;
				lie = j;
			}
		}
	}
	
	printf("最大值是：\n");
	printf("%d  %d  %d", max, hang, lie);

	system("pause");
	return 0;
}