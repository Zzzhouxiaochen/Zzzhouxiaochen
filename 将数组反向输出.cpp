
#include<stdlib.h>
#include<stdio.h>


void inv(int x[], int n)
{
	int temp, i, j, m = (n - 1) / 2;
	for ( i = 0; i < m; i++)
	{
		j = n - 1 - i;
		temp = x[i]; x[i] = x[j]; x[j] = temp;
	}
	return;
}

int main()
{
	int i, a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf( "原来数组：");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	inv(a, 10);
printf( "之后的数组");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	
	return 0;

}
