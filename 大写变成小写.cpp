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
		//Ҳ����ֱ�ӵ���tolower����  ��ͷ�ļ�ctype.h��
	}
	system("pause");
	return 0;
}