#include<stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include "iostream"
using namespace std;

void shuffle(int [][ 13 ]);   //ϴ��
void deal(const int [][ 13 ], const char *[], const char *[] ,
    int[], int[] );     //����
void yanzheng(int[], int[] ); //��֤���е���

int main()
{
	
	int i;
	int size = 0;
	printf("��������Ϸ������");
	cin >> size;
	
	for (i = 0; i < size; i++)
	{
		int j = 1;
			
			// const char *suit[ 4 ]={ "Hearts" , "Diamonds" , "Clubs" , "Spades" };
			const char *suit[4] = { "����", "����", "÷��", "����" };

			const char *face[13] = { "A", "2", "3", "4",
				"5", "6", "7", "8",
				"9", "10", "J", "Q", "K" };
			int hang[6] = { 0 };
			int lie[6] = { 0 };
			int deck[4][13] = { 0 }; //��ʼ����
			while (j > 0)
			{
			//srand(time(0));           //���������

			

			//srand(time(NULL));     // �����������

			//int deck[4][13] = rand();       // ���������
			/*	int a = 0, b = 0;
			  a = rand();
			  b = rand();*/
			//printf("%d\n%d\n", a,b);
			/*deck[4][13] = a;*/

			shuffle(deck);                           //ϴ��
			cout << "A: \t B:\n";
			deal(deck, face, suit, hang, lie);        //����
			yanzheng(hang, lie);    //��ý��
			j--;
			}
	
	}
system("PAUSE");
return 0;

}
//ϴ��
void shuffle(int wDeck[][ 13 ])
{
int row,column;

for(int card = 1; card <= 52; card++ )
{
	
   do{
	   //srand((unsigned)time(NULL));
	   //srand(time(0));
	   row = rand() % 4;
   column = rand() % 13;
   }while( wDeck[ row ][ column ] != 0 );
   wDeck[ row ][ column ] = card;
}
}
//����
void deal( const int wDeck[][ 13 ], const char *wFace[],
    const char *wSuit[], int hang[], int lie[] )//wsuit ����  wface ����
{
for(int card = 1; card <= 6; card++ )
{
   for(int row = 0; row <= 3; row++ )
   {
    for(int column = 0; column <= 12; column++ )
    {
     if(wDeck[ row ][ column ] == card )
     {
      hang[ card - 1 ] = row;
      lie[ card - 1 ] =column;
      cout<< setw( 2 ) << setiosflags( ios::left )
       << wSuit[ row ]
       << setw( 2 ) <<setiosflags( ios::right )
         << wFace[ column ]
       << ( card % 2 == 0 ? '\n' : '\t' );
     }
    }
   }
}
cout<< endl;
}
//��֤���е���
void yanzheng(int hang[], int lie[] )
{
void paixu(int [] ,int );                    //����,��ҪΪ����֤�Ƿ���˳��
void yantong(int array[] ,int same[],   //��֤��ͬ�Ķ��ƺ���
     int size ,int count );      //����2Ϊѡ��A���ƻ���B����
            //0��ʾA 1��ʾB
int yanhuase(int [],int );     //��֤�Ƿ���ͬ�� ����2 ͬ��
int shunzi(int [],int );                //��֤�Ƿ���˳��
int bijiao(int [], int[], int[], int, int, int, int ); //�Ƚ��ƴ�С
int play[ 3 ] = { 0 }; //A
int game[ 3 ] = { 0 }; //B
int count = 0;          //��֤����Ķ���
int playse = 0;         //A�Ƿ���ͬ��
int gamese = 0;     //B�Ƿ���ͬ��
int plays = 0;          //A�Ƿ���˳��
int games = 0;          //B�Ƿ���˳��
int result = 0;         //�ȽϽ��
//���A��
playse = yanhuase(hang, 0 );
paixu(lie, 0 );
plays = shunzi(hang, 0 );
yantong(lie, play, 0 ,count );
//���B��
gamese = yanhuase(hang, 1 );
paixu(lie, 1 );
games = shunzi(hang, 1 );
yantong(lie, game, 1 ,count );
//�Ƚ���
result= bijiao(play, game, lie, plays, games, playse, gamese ) ;
if(result == 0 )
   cout<< "���BӮ!\n" << endl;
else if(result == 1 )
   cout<< "���AӮ!\n" << endl;
else
   cout<< "�ѵ�һ����ƽ�ְ�!\n" << endl;
//int a = 0, b = 0, c = 0;
////int count = 0;          //��֤����Ķ���
////int playse = 0;         //A�Ƿ���ͬ��  a
////int gamese = 0;     //B�Ƿ���ͬ�� 
////int plays = 0;          //A�Ƿ���˳��
////int games = 0;          //B�Ƿ���˳��
////int result = 0;         //�ȽϽ��
//
//if (playse == 1 || gamese == 1)
//	a++;
//if (plays == 1 || games == 1)
//	b++;
//if (count == 1 || games == 1)
//	c++;
//int p, pp, ppp;
//p = (double)a / (double)size;
//pp = (double)b / (double)size;
//ppp = (double)c / (double)size;
//printf("ͬ��˳�ĸ��ʣ�%d\n", p);
//printf("%d\n", p);
//printf("˳�ӵĸ��ʣ�%d\n", pp);
//printf("%d\n", pp);
//printf("���ӵĸ��ʣ�%d\n", ppp);
//printf("%d\n", ppp);

}
//��֤����
void yantong(int array[], int same[], int size ,int count )
{
	
int num;
for(int i = size; i < 6; i += 2 )
{
   num = array[ i ];
   for(int j = i + 2 ; j < 6; j += 2 )
   {
    if(array [ i ] == array [ j ])
    {
     same[ count ] = array[ i ];
     same[ count + 1 ] = array[ i ];
     i += 2;
    }
   }
}
if(count != 0 )
{
	if(array[ 4 + size ] == same[ count ])   //����������������һλҲ���ڶ���֮һ
   {
    same[ count + 1 ] =array[ 4 + size ];
   }
}
count = 0;
if( same[ count ] != 0 )
   if(size ==0 )  
    cout << "���Aӵ�ж���: ";
   else
    cout << "���Bӵ�ж���: " ; 
while( same[ count ] != 0) //��ӡ��������
{
   cout << same[ count++ ] + 1 << " ";
}
if(count != 0 )
   cout << endl;


}

//��֤�Ƿ���ͬ��
int yanhuase(int lie[],int size )
{

int num;
num = lie[ size ];
for(int i = size; i < 6; i += 2 )
{
   if(num != lie[ i ])
    return 0;     //��ʾ����ͬ��
}
return 1;             //��ʾͬ��
}

//��������
void paixu(int lie[], int size)
{
int temp;
for(int i = size; i < 6; i += 2 )
{
   for(int j = i; j < 6 - 2; j += 2 )
   {
    if(lie[ j ] > lie[ j + 2 ])
    {
     temp = lie[ j ];
     lie[ j ] = lie[ j + 2 ];
     lie[ j + 2 ] = temp;
    }
   }
}
}

//��֤�Ƿ���˳��
int shunzi(int hang[],int size )
{
for(int i = size; i < 6; i += 2 )
{
   for(int j = i; j < 6 - 1; j += 2 )
   {
    if(hang[ j + 2 ] != hang[ j ] + 1 )
    {
     return 0;                            //����˳��
    }
   }
}
return 1;                                        //˳��

}

//�Ƚ��ƴ�С
int bijiao(int play[], int game[], int lie[],
     int plays, int games, int playse, int gamese )
{
int num1 = 0; //���A��������
int num2 = 0; //B��������
//ͬ��˳ �� ͬ�� �ж�
if(playse == 1 && gamese == 1 )    //����ͬ��
{
	if(plays == 1 && games == 1 ) //����ͬ��˳
   {  
    if(play[ 0 ] < game[ 0 ] )
   
     return 0;             //Bͬ��˳��
    else
     return 1;             //���Aͬ��˳��
   }
   else if(plays == 1 && games == 0 ) //���Aͬ��˳
    return 1;
   else if(plays == 0 && games == 1 ) //Bͬ��˳
    return 0;
}
else if(playse == 1 && gamese == 0 ) //���Aͬ��
   return 1;
else if(playse == 0 && gamese == 1 ) //Bͬ��
   return 0;
//˳���ж�
if(plays == 1 && games == 1 ) //����˳��
{
   if(play[ 0 ] < game[ 0 ] )
    return 0;             //B˳��
   else
    return 1;             //���A˳��
}
else if(plays == 1 && games == 0 ) //���A˳
   return 1;
else if(plays == 0 && games == 1 ) //B˳
   return 0;
while( play[ num1++ ] != 0 ) //�������A������
   ;
while( game[ num2++ ] != 0 ) //����B������
   ;
num1--;
num2--;
if(num1 != 0 || num2 != 0 )   //�ж��Ӵ���
{
   if(num1 < num2 )    //B���Ӷ�
    return 0;
   else if(num1 > num2 )
    return 1;     //���A���Ӷ�
   else if(num1 == num2 )       //һ����Ķ���
   {
    if(play[ num1 - 1 ] < game[ num2 - 1]) 
     return 0;    //B���ӵ�����
    else if (play[ num1 - 1 ] > game[ num2 - 1 ])
     return 1;           //���A���ӵ�����
    else
     return 2;
   }
}
for(int i = 2; i >= 0; i-- )   //û�ж��ӱȵ���
{
	 if(lie[ 2 * i ] < lie[ 2 * i + 1 ] )
    return 0;                        // ���B��
}
return 1;      //���A������


}

//
//int  gailv(int plays, int games, int playse, int gamese,int count)
//{
//	int a = 0, b = 0,c=0;
//	//int count = 0;          //��֤����Ķ���
//	//int playse = 0;         //A�Ƿ���ͬ��  a
//	//int gamese = 0;     //B�Ƿ���ͬ�� 
//	//int plays = 0;          //A�Ƿ���˳��
//	//int games = 0;          //B�Ƿ���˳��
//	//int result = 0;         //�ȽϽ��
//
//	if (playse == 1 || gamese == 1)
//		a++;
//	if (plays == 1 || games == 1)
//		b++;
//	if (count == 1 || games == 1)
//		c++;
//	int p, pp, ppp;
//	p = a / size;
//	pp = b / size;
//	ppp = c / size;
//	printf("ͬ��˳�ĸ��ʣ�%d\n", p);
//	printf("%d\n", p);
//	printf("˳�ӵĸ��ʣ�%d\n", pp);
//	printf("%d\n", pp);
//	printf("���ӵĸ��ʣ�%d\n", ppp);
//	printf("%d\n", ppp);
//	return 1;
//}

int js()
{
	int a = 0;
	a++;
	return a;
}