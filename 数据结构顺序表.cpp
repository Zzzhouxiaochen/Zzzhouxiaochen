//˳���
#define MAX 1000
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;

typedef struct
{
	datatype  elem[MAX];  //��������
	int last;  //���һ��Ԫ�ص�λ��  last �����һ��Ԫ�ص��±�  last +1ȷ�����鳤��  ���±�
}SeqList;

//����ĳ��Ⱥ� ���Ա��Ȳ�һ��    
//���鳤���Ǵ�����Ա�Ĵ洢�ռ䳤�� �����ֵ���� 
//���Ա�����Ԫ�ظ��������������Ա�Ĳ���ɾ���������б仯
//ע����������Ԫ��λ����±�   ��a0��λ����1���±���0

SeqList L; //����һ��˳���
//����L.last+1  ������a1~an  �ֱ���a[0]��a[L.last]


SeqList* LP;  //LP��һ��ָ�����
//�洢�ռ���趨
LP = (SeqList*)malloc(sizeof(SeqList));   //LP�зŵ���˳���ĵ�ַ
//����(*LP).last+1 ���� LP->last+1




//�������
//���裺1.ai~an���������ƶ�һ��
//	  2.��������
//	  3.�ı�lastָ�����һ��Ԫ�� Ҳ���Ǹı��
//ע�⣺�жϱ��Ƿ�Ϊ��������λ�õ���Ч�ԣ������ƶ������޸�last
void charu(SeqList* Lp, int i,datatype x)
{
	//����
	if (Lp->last == MAX - 1) 
		printf("������\n");
	return;

	
	//�жϺ�����
	int i;	  //i��λ��
	if (i<1 || i>Lp->last)
		printf("λ�ô���");
	return;

	//��������
	int j;
	for (j = Lp->last; j >= i - 1; j--)  //��λ�� last���±�
	{
		Lp->elem[j+1] = LP->elem[j];   //�ı�λ������ �����±��һ
	} 
	Lp->elem[i - 1] = x;   //��������
	Lp->last++;
	
}
//˳���������ʱ�临�Ӷ���O(n);


//ɾ������
//ɾ����i��Ԫ��

//���裺
//1.��ai~an˳������
//2.�ı�lastָ�볤��
//ע�⣺
//��ղ���ɾ����ɾ����i��Ԫ�أ���֤��Ч�ԣ�ע���ƶ�����
int shanchu(SeqList* Lp, int i)  
{
	//�ж���Ч�ԣ��ձ�
	int j;
	if (i<1 || i>Lp->last + 1)
	{
		printf("������iԪ�أ�");
		return(0);
	}

	//�ƶ�λ��
	for ( j = i; j <Lp->last ; j++)
	{
		Lp->elem[j - 1] = Lp->elem[j];
	}
	Lp->last--;
	return(1);
}
//ʱ�临�Ӷ�O(n)



//˳����ʵ��
//�������Ա�La,Lb�ֱ��ʾ����a,b Ҫ���µļ���a=a U b  ��������Ԫ�ض���������������
//˼·����չLa�߱� Lb����ȡ��Ԫ�أ���La�Ƚϣ�û�е�Ԫ�ؽ��в����������Ϊ�����ԣ�����Ҫ�ƶ�����
void jihe(SeqList* La, SeqList Lb)
{
	int i, j, La_len, Lb_len;
	datatype e;
	La_len = La->last;
	Lb_len = Lb.last;
	for ( i = 0; i < Lb_len; i++)
	{
		e = Lb.elem[i];
		j = 0;
		while (j <= La_len&&e != La->elem[j])j++;
			if (j>La_len)
			if (La_len < MAX - 1)
				La->elem[++(La->last)] = e;
	}
}


//����˳�����С��������   �ϲ�֮��������
//˼·��һ��ɨ��a,b��ɨ���н�С�����ŵ�c��,ֱ��һ����ɨ���������ʣ�����ȫ��c��
//c������Ҫ�㹻����a, b��������ָ��i, j�ֱ�ָ��a, bԪ�أ���a.elem[i]>b.elem[j], ��b.elem[j]����
//��֮��a.elem[i]����c�С�

void hebingpaixu(SeqList A, SeqList B,SeqList* C)
{
	int i, j, k;
	//�ж�AB����Ϊ��
	while (A.last >= i && B.last >= j)
	{
		if (A.elem[i] < B.elem[j])
			C->elem[k++] = A.elem[i++];//��A��iָ��ָ��ļ�¼����C��
		else
			C->elem[k++] = B.elem[j++];//��B��iָ��ָ��ļ�¼����C��
	}
	while (i<=A.last)     //Aʣ�ಿ�ֲ���
		C->elem[k++] = A.elem[i++];
	while (i <= B.last)     //Bʣ�ಿ�ֲ���
		C->elem[k++] = B.elem[j++];
	
}










int main()
{
		

	system("pause");
	return 0;
}