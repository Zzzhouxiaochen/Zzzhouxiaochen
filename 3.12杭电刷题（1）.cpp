#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n,max=0,b[1000];
	char a[1000][16];
	while (cin >> n&&n != 0)
	{

		
		for (int i = 0; i < n; i++)
		{
			cout << "������������ɫ��" << endl;
			cin >> a[i];
		}
		//�Ƚ������ַ����������ͬ�����Ӧ��b[i]+1     
		for(int i=0;i<n;i++)
		{        
			b[i]=0;          
			for(int j=i+1;j<n;j++)
			{      
				if(strcmp(a[i],a[j])==0)
				{   
					b[i]++;             
				}           
			}         
			if(b[i]>max)       
				max=b[i];     
		}       
		//������������ַ���    
		for(int i=0;i<n;i++)
		{              
			if(b[i]==max)     
				cout<<a[i]<<endl;   
		}
		
	}
	system("pause");
	return 0;
}