#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int times, n, m, sum = 0, count1, count2;
	while (scanf("%d", &times) != EOF) {
		for (count1 = 1; count1 <= times; count1++) {
			scanf("%d", &n);
			sum = 0;
			for (count2 = 1; count2 <= n; count2++) {
				scanf("%d", &m);
				sum += m;
			}
			if (count1 == times)
				printf("%d\n", sum);
			else
				printf("%d\n\n", sum);
		}
	}
	system("pause");
	return 0;
}