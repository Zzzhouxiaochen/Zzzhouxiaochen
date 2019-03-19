#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct yonghu    //struct yonghu 是类型名  yonghu 是结构体名
{
	char name[20];  //成员列表
	char address[100];
};

//结构体类型变量的的定义：
// 1.结构体类型在定义变量
struct yonghu yonghu1, yonghu2;

//2.定义类型时候定义变量
struct yonghuc    //struct yonghuc 是类型名
{
	char name[20];  //成员列表
	char address[100];
}yonghuq, yonghuw;

//3.直接定义结构体类型变量  即不出现结构体名
struct
{
	int num;
}yonghu5, yonghu6;

// 成员也可以是结构体变量
struct studentcc
{
	int a;
	char name1[10];
	int age;

}studentc;


struct yonghucc    //struct yonghucc 是类型名  yonghu 是结构体名
{
	char name[20];  //成员列表
	char address[100];
	struct studentcc asd;  //asd 是struct student类的
}qwe;



//结构体变量的引用
//结构体变量名.成员名

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

	//也可以进行一些运算
	student2.age = student2.age;
	int sum;
	sum = student1.age + student1.age;
	student1.age++;
	++student1.age;

	//也可以引用结构变量成员地址，也可以引用结构体变量的地址
	scanf("%d", &student1.age);  //输入age的值
	printf("%o", &student1);           //输出student1的首地址
	//结构体变量的地址主要做函数参数，传递结构体变量的地址





	//结构体变量的初始化
	struct studenttt
	{
		long int num;
		char name[30];
		char sex;
		char addr[20];

	}a = {123,"Li li",'M',"西安"};



	//结构体数组  即结构体变量是数组
//初始化：


	struct studenttt
	{
		long int num;
		char name[30];
		char sex;
		char addr[20];

	}a[3] = { { 123, "Li li", 'M', "西安" }, { 1231, "Lii", 'M', "安" }, { 13, "li", 'M', "西" } };
	  //结构体数组的举例
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
			printf("%5s:%d", a[i].name, a[i].count);  //学会结构体的输出 
		}
		return 0;
	}



	//指向结构体类型数据的指针
	//1.指向结构体变量的指针
	struct studentz
	{
		int age;
		char name[20];
		float score;
		float num;
	};
	struct studentz stu1;
	struct studentz *p;
	p = &stu1;  //p指向stu1的首地址
	stu1.age = 12;
	(*p).age; //括号不可以省略  因为.运算符优先级高于*  会导致*（p.age）

//其中（*p）.age 可以用p->age代替
	//也就是说一下三种情况等价：1.结构体变量名.成员stu1.age  2.（*p）.age  3.p->age

	//->是指向运算符

	//2.指向结构体数组的指针
	//即指向数组第一个所有信息的地址，然后到第二个信息 就是数组中的个个元素
	//注意两点：1.（p++)->num;  含义; 先得到num的值，在加一指向下一个元素
	//	2.（++p）->num;    含义：先加一，指向下一个元素，然后得到num的值

	//	另一个：p只能指向struct student 类型的数据 不能指向元素中某个单独的成员
	//	例如：p = stu1[1].num;  但是可以利用强制转换来实现
	//	例如：p = (struct *)stu1[1].num; 此时p的值是stu1[1]元素的num成员的起始地址 如果p+1就是下一个成员的起始地址；
	//	可以用printf("%d",p)来打印stu1中num的值。但是p还是保持原来的类型







	//用结构体变量和指向结构体的指针作函数参数  即  p=&stu1,
		//输出函数：
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


	}sim;    //sim现在是一个类型名，不是结构体变量
	//后续声明：
	sim x; //类似的

	system("pause");
	return 0;
}