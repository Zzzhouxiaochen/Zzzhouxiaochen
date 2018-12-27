#define _CRT_SECURE_NO_WARNINGS  //为解决scanf函数不安全的警告问题
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int x, y, z, sum;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			for (z = 1; z <= 9; z++)
			{
				sum = 100 * x + 10 * y + z + 100 * y + 10 * z + z;
				if (sum == 532)
					printf("x=%d,y=%d,z=%d\n", x, y, z);
			}
		}
	}
	system("pause");
	return 0;
}