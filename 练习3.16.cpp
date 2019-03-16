#include<stdlib.h>
#include<stdio.h>

 struct phone  //付账，电话，记录
{
	short change;
	short area;
	short station;
};

 struct tel  //电话
 {
	 short year;
	 short mouth;
	 short day;
	 int time;
	 struct phone call;
	 struct phone recall; //接
	 struct phone becall;//转
 };

int main()
{

	system("pause");
	return 0;
}