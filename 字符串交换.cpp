
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char* replace(char* s1, char* s2, int pos)
{
	int i, j;
	i = 0;
	for (j = pos; s1[j] != '\0';j++)
	if (s2[i] != '\0')
		{
			s1[j] = s2[i];
			i++;
		}
	else
		break;
	return s1;
}




int main()
{
	char string1[100], string2[100];
	int position;
	printf("\n�������ַ�1��");
	gets(string1);
	printf("\n�������ַ�2��");
	gets(string2);
	printf("\n�������滻��λ�ã�");
	scanf("%d", &position);
	replace(string1, string2, position);
	printf("\n�����ַ�:%s",string1);
	system("pause");
	return 0;
}