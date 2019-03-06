#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int a[3][3];
	int i,j,s=0;
	printf("«Î ‰»Î ˝æ›£∫\n");
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i<3; i++)
	for (j = 0; j<3; j++)
	if (i == j)
		s += a[i][j];
	for (i = 0; i<3; i++)
	for (j = 0; j<3; j++)
	if (i + j == 2)
		s += a[i][j];
	s = s - a[1][1];
	printf("%d", s);
	system("pause");
	return 0;
}