#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	unsigned int value;
	unsigned int answer=0;
	unsigned int i;
	for ( i = 0; i !=0; i<<=1)
	{
		answer <<= 1;
		if (value&1)
		{
			answer |= 1;
		}
		value >>= 1;
	}
	system("pause");
	return answer;
}