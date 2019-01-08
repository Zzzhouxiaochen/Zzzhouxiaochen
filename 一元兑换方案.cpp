#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,j,k;
	
	for (i = 0; i <= 10;i++)
	for (j = 0; j <= 5; j++)
	for (k = 0; k <= 2; k++)
	if (i+j*2+k*5==10)
	printf("Ò»½Ç£º%d  ¶þ½Ç£º%d  Îå½Ç£º%d", &i, &j, &k);
	system("pause");
	return 0;


