
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>



int main()
{
	int i = 0, j = 0;
	char a[100], b[20];
	printf("ÇëÊäÈë×Ö·û´®1£º\n");
	scanf("%s", a);
	printf("ÇëÊäÈë×Ö·û´®2£º\n");
	scanf("%s", b);
	while (a[i]!='\0')
	{
		i++;
	}
	while (b[j] != '\0')
		a[i++] = b[j++];
	a[i] = '\0';
	printf("%s", a);
	system("pause");
	return 0;
}