#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

float average(float a[10])
{
	int i;
	float aver, sum = a[0];
	for ( i = 1; i < 10; i++)
		sum = sum + a[i];
	aver = sum / 10;
	return aver;
	
}
int main()
{
	int i;
	float ba[10], aver;
	for ( i = 0; i < 10; i++)
		scanf("%f", &ba[i]);
	printf("\n");
	aver = average(ba);
	printf("平均数是：%f\n", aver);
	system("pause");
	return 0;
}

