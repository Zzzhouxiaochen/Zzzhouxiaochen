#define _CRT_SECURE_NO_WARNINGS
#define max 50
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i,num;
	int chinaese[max], math[max], english[max];
	long studentid[max];
	float average[max];
	printf("������ѧ������");
	scanf("%d", &num);
	printf("������ѧ��ID�����ſεĳɼ���\n");
	printf("    ID    chinaese    math    engligsh\n");
	for ( i = 0; i < num; i++)
	{
		printf("���%d", i + 1);
		scanf("%d%d%d%d", &studentid[i], &chinaese[i], &math[i], &english[i]);
		average[i] = (chinaese[i] + math[i] + english[i]) / 3;
	}
	printf("    ID    chinaese    math    engligsh     average\n");
	for ( i = 0; i < num; i++)
	{
		printf("%8d%8d%8d%8d%14.5f\n", studentid[i], chinaese[i], math[i], english[i], average[i]);
	}
	system("pause");
	return 0;
}