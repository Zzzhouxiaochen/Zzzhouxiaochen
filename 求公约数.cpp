#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, a, b;
	printf("������������\n");
		scanf("%d  %d",&a,&b);

	if (a > b)
	{
		for (i = b; i >= 1; i--)
		{
			if ((a%i == 0) && (b%i == 0))
			{
				printf("���Լ��Ϊ��\n");
				printf("%d\n", i);
				break;
			}
		}
	}

	else
	{
		for (i = a; i >= 1; i--)
		{
			if ((a%i == 0) && (b%i == 0))
			{
				printf("���Լ��Ϊ��\n");
				printf("%d\n", i);
				break;
			}
		}
	}
	system("pause");
	return 0;
}