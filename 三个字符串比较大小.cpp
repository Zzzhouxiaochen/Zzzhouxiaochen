#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	char a[1024];
	char b[3][1024];
	int i;
	for ( i = 0; i < 3; i++)
	{
		gets(b[i]);
	}
	if (strcmp(b[0], b[1])>0)
		strcpy(a, b[0]);
	else
		strcpy(a, b[1]);
	if (strcmp(b[2], a) > 0)
		strcpy(a, b[2]);
	printf("最大的字符串是：%s\n", a);
	system("pause");
	return 0;
}