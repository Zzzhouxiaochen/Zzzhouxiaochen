#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	char a[1024];
	gets(a);
	int i = 0, m=0,num = 0;
	char k;
	
	for (i = 0; (k = a[i]) != '\0'; i++)
	{
		if (k == ' ')
			m=0;
		else if (m == 0)
		{
			m = 1;
			num++;
		}

	}
	printf("%d",  num);
	system("pause");
	return 0;
}