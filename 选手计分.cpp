
                                                                                                                                                                                                                                                 #define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i, j = 1, n;
	float a[100], b[100], sum = 0;
	printf("������ѡ��������\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("������%dѡ��\n", i);
		printf("�����������\n");
		for (; j < 5 * n + 1; j++)
		{
			scanf("%f", &a[j]);
			sum += a[j];
			if (j % 5 == 0)
				break;
		}
		b[i] = sum;
		sum = 0;
		j++;
	}
	j = 1;
	printf("player       a       b       c       d      e       total\n");
	for (i = 1; i <= n; i++)
	{
		printf("%d��ѡ��", i);
		for (; j < 5 * n + 1; j++)
		{
			printf("%8.1f", a[j]);
			if (j % 5 == 0)
				break;
		}
		printf("%8.1f\n", b[i]);
		j++;
	}
	system("pause");
	return 0;
}