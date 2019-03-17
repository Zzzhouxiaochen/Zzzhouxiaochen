#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch;
	while ((ch=getchar())!=EOF)
	{
		if (ch >= 'A'&&ch <= 'Z')
			ch += 'a' - 'A';
		putchar(ch);
		//也可以直接调用tolower函数  在头文件ctype.h中
	}
	system("pause");
	return 0;
}