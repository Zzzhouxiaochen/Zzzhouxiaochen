#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int i, j;
	int k, q;

	scanf("%d", &k); //����һ����

	int a[10] = { 0, 2, 4, 6, 9, }; //��ʼ������
	int b[10];//���ڴ��a������е�ֵ
	for (i = 0; i<10; i++)
		b[i] = a[i];

	for (i = 0; i<10; i++)
	{
		if (k>a[i] && k<a[i + 1])  //�Ƚ���������������ĸ�λ����
		{
			q = i + 1;
			a[q] = k; //�������������������
			for (j = q + 1; j<10; j++)   // ����b���齫�������д��a����
				a[j] = b[j - 1];
		}
	}


	for (i = 0; i<10; i++) //������������
		printf("%3d", a[i]);
	system("pause");
	return 0;
}