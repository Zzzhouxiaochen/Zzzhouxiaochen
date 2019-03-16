#include<stdlib.h>
#include<stdio.h>



int main()
{
	int line=0;
	int begin = 1;
	int  ch=0;
	while (ch == getchar() != EOF)
	{
		if (begin == 1) //´òÓ¡ĞĞºÅ
		{
			begin = 0;
			line += 1;
			printf("%d", line);
		}

		putchar(ch); //´òÓ¡×Ö·û
		if (ch == '\0')
			begin = 1;
	}
	system("pause");
	return 0;
}