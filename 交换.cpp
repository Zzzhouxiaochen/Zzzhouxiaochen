#include<stdio.h>
#include<stdlib.h>
int main()

{
	int i = 3;
	int j = 2;
	i = i + j;
	j = i - j;
	i = i - j;
	printf("i=%d£¬j=%d\n", i, j);
	system("pause");
	return 0;

}
