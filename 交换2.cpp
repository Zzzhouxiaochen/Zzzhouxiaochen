
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	int b = 20;
	int tmp = a;

	a = b;
	b = tmp;
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	system("pause");
	return 0;

}

