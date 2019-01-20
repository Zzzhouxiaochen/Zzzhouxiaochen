
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
	printf("\nÇëÊäÈë×Ö·û1£º");
	gets(string1);
	printf("\nÇëÊäÈë×Ö·û2£º");
	gets(string2);
	printf("\nÇëÊäÈëÌæ»»µÄÎ»ÖÃ£º");
	scanf("%d", &position);
	replace(string1, string2, position);
	printf("\n×îÖÕ×Ö·û:%s",string1);
	system("pause");
	return 0;
}