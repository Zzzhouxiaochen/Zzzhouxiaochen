
#include <stdio.h>

int main()

{

	char a, b, c, temp;

	while (scanf("%c%c%c", &a, &b, &c) != EOF)

	{

		getchar();//不加getchar()函数不正确

		if (a > b)

		{

			temp = a;

			a = b;

			b = temp;

		}

		if (c <= a)

		{

			temp = c;

			c = b;

			b = temp;

			temp = b;

			b = a;

			a = temp;

		}

		else if (c > a && c < b)

		{

			temp = c;

			c = b;

			b = temp;

		}

		printf("%c %c %c\n", a, b, c);

	}

	return 0;

}
