#include<stdlib.h>
#include<stdio.h>

 struct phone  //���ˣ��绰����¼
{
	short change;
	short area;
	short station;
};

 struct tel  //�绰
 {
	 short year;
	 short mouth;
	 short day;
	 int time;
	 struct phone call;
	 struct phone recall; //��
	 struct phone becall;//ת
 };

int main()
{

	system("pause");
	return 0;
}