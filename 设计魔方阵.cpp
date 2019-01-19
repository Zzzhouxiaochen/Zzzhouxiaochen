#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

int main()   //每一行，每一列。对角线之和永远相等
{
	int i, j, x = 1, y = 3, a[6][6] = { 0 };
	for (i = 1; i <= 25; i++)
	{
		a[x][y] = i;
		if (x == 1 && y == 5)
		{
			x = x + 1;
			continue;
		}
		if (x == 1)
		{
			x = 5;
		}
		else
		{
			x--;
		}
		if (y == 5)
		{
			y = 1;
		}
		else
		{
			y++;
		}
		if (a[x][y] != 0)
		{
			x = x + 2;
			y = y - 1;
		}
	}
		for (i = 1; i <= 5; i++)
		{
			for (j = 1; j <= 5; j++)
			{
				printf("%4d", a[i][j]);
				
			}
			printf("\n");
		}
	
	system("pause");
	return 0;
}