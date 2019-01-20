#define N 50
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void convert(char s[N])
{

	int i, j;
	char temp;
	for (i = 0; i < strlen(s) / 2; i++)
	{
		j = strlen(s)-1 ;
		temp = s[i];
		s[i] = s[j - 1];
		s[j - 1] = temp;
	}
	printf("现在字符是：\n%s", s);
}
	




int main()
{
	
	char str[N];
	printf("输入字符：\n");
	gets(str);
	printf("平常字符：\n%s", str);
	convert(str);

	system("pause");
	return 0;
}