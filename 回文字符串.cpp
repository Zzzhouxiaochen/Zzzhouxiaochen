
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int palind(char str[], int k, int i)
{
	if (str[k] == str[i - k] && k == 0)
		return 1;
	else if (str[k] == str[i - k])
		palind(str, k - 1, i);
	else
		return 0;
}


int main()
{
	int i = 0, n = 0;
	char ch, str[20];
	while ((ch = getchar()) != '\n')
	{
		str[i] = ch;
		i++;
	}
	if (i % 2 == 0)
		n = palind(str, (i / 2), i - 1);
	else
		n = palind(str, (i/2-1), i - 1);
	if (n == 0)
		printf("不是回文");
	else
		printf("是回文");
	system("pause");
	return 0;
}