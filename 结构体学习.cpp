#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct yonghu    //struct yonghu ��������  yonghu �ǽṹ����
{
	char name[20];  //��Ա�б�
	char address[100];
};

//�ṹ�����ͱ����ĵĶ��壺
// 1.�ṹ�������ڶ������
struct yonghu yonghu1, yonghu2;

//2.��������ʱ�������
struct yonghuc    //struct yonghuc ��������
{
	char name[20];  //��Ա�б�
	char address[100];
}yonghuq, yonghuw;

//3.ֱ�Ӷ���ṹ�����ͱ���  �������ֽṹ����
struct
{
	int num;
}yonghu5, yonghu6;

// ��ԱҲ�����ǽṹ�����
struct studentcc
{
	int a;
	char name1[10];
	int age;

}studentc;


struct yonghucc    //struct yonghucc ��������  yonghu �ǽṹ����
{
	char name[20];  //��Ա�б�
	char address[100];
	struct studentcc asd;  //asd ��struct student���
}qwe;



//�ṹ�����������
//�ṹ�������.��Ա��

struct data
{
	int mouth;
	int day;
	int year;
};
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct data birthday;
	char addr[30];

}student1, student2;


int main()
{
	student1.age = 10;
	student1.birthday.year;

	//Ҳ���Խ���һЩ����
	student2.age = student2.age;
	int sum;
	sum = student1.age + student1.age;
	student1.age++;
	++student1.age;

	//Ҳ�������ýṹ������Ա��ַ��Ҳ�������ýṹ������ĵ�ַ
	scanf("%d", &student1.age);  //����age��ֵ
	printf("%o", &student1);           //���student1���׵�ַ
	//�ṹ������ĵ�ַ��Ҫ���������������ݽṹ������ĵ�ַ





	//�ṹ������ĳ�ʼ��
	struct studenttt
	{
		long int num;
		char name[30];
		char sex;
		char addr[20];

	}a = {123,"Li li",'M',"����"};



	//�ṹ������  ���ṹ�����������
//��ʼ����


	struct studenttt
	{
		long int num;
		char name[30];
		char sex;
		char addr[20];

	}a[3] = { { 123, "Li li", 'M', "����" }, { 1231, "Lii", 'M', "��" }, { 13, "li", 'M', "��" } };
	  //�ṹ������ľ���
	struct houxuanren
	{
		char name[30];
		int count;
	}a[3] = { { "liu", 0 }, { "zhou", 0 }, { "wang", 0 } };



	int main()
	{
		int i, j;
		char name_ls[20];
		for (i = 0; i < 10; i++)
		{
			scanf("%s", &name_ls);
			for (i = 0; i < 3; i++)
			{
				if (strcmp(name_ls, a[i].name) == 0)
					count += 1;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			printf("%5s:%d", a[i].name, a[i].count);  //ѧ��ṹ������ 
		}
		return 0;
	}



	//ָ��ṹ���������ݵ�ָ��
	//1.ָ��ṹ�������ָ��
	struct studentz
	{
		int age;
		char name[20];
		float score;
		float num;
	};
	struct studentz stu1;
	struct studentz *p;
	p = &stu1;  //pָ��stu1���׵�ַ
	stu1.age = 12;
	(*p).age; //���Ų�����ʡ��  ��Ϊ.��������ȼ�����*  �ᵼ��*��p.age��

//���У�*p��.age ������p->age����
	//Ҳ����˵һ����������ȼۣ�1.�ṹ�������.��Աstu1.age  2.��*p��.age  3.p->age

	//->��ָ�������

	//2.ָ��ṹ�������ָ��
	//��ָ�������һ��������Ϣ�ĵ�ַ��Ȼ�󵽵ڶ�����Ϣ ���������еĸ���Ԫ��
	//ע�����㣺1.��p++)->num;  ����; �ȵõ�num��ֵ���ڼ�һָ����һ��Ԫ��
	//	2.��++p��->num;    ���壺�ȼ�һ��ָ����һ��Ԫ�أ�Ȼ��õ�num��ֵ

	//	��һ����pֻ��ָ��struct student ���͵����� ����ָ��Ԫ����ĳ�������ĳ�Ա
	//	���磺p = stu1[1].num;  ���ǿ�������ǿ��ת����ʵ��
	//	���磺p = (struct *)stu1[1].num; ��ʱp��ֵ��stu1[1]Ԫ�ص�num��Ա����ʼ��ַ ���p+1������һ����Ա����ʼ��ַ��
	//	������printf("%d",p)����ӡstu1��num��ֵ������p���Ǳ���ԭ��������







	//�ýṹ�������ָ��ṹ���ָ������������  ��  p=&stu1,
		//���������
		void print(struct studentz *p)
	{
			prtinf("", p->num...;)
	}
	int main()
	{
		print(&stu1);
	}
		



	typedef struct 
	{
		int age;
		char a;


	}sim;    //sim������һ�������������ǽṹ�����
	//����������
	sim x; //���Ƶ�

	system("pause");
	return 0;
}