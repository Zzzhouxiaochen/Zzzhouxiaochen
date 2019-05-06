#include<stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include "iostream"
using namespace std;

void shuffle(int [][ 13 ]);   //洗牌
void deal(const int [][ 13 ], const char *[], const char *[] ,
    int[], int[] );     //发牌
void yanzheng(int[], int[] ); //验证手中的牌

int main()
{
	
	int i;
	int size = 0;
	printf("请输入游戏次数：");
	cin >> size;
	
	for (i = 0; i < size; i++)
	{
		int j = 1;
			
			// const char *suit[ 4 ]={ "Hearts" , "Diamonds" , "Clubs" , "Spades" };
			const char *suit[4] = { "红桃", "方块", "梅花", "黑桃" };

			const char *face[13] = { "A", "2", "3", "4",
				"5", "6", "7", "8",
				"9", "10", "J", "Q", "K" };
			int hang[6] = { 0 };
			int lie[6] = { 0 };
			int deck[4][13] = { 0 }; //初始化牌
			while (j > 0)
			{
			//srand(time(0));           //随机数种子

			

			//srand(time(NULL));     // 产生随机种子

			//int deck[4][13] = rand();       // 产生随机数
			/*	int a = 0, b = 0;
			  a = rand();
			  b = rand();*/
			//printf("%d\n%d\n", a,b);
			/*deck[4][13] = a;*/

			shuffle(deck);                           //洗牌
			cout << "A: \t B:\n";
			deal(deck, face, suit, hang, lie);        //发牌
			yanzheng(hang, lie);    //获得结果
			j--;
			}
	
	}
system("PAUSE");
return 0;

}
//洗牌
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
//发牌
void deal( const int wDeck[][ 13 ], const char *wFace[],
    const char *wSuit[], int hang[], int lie[] )//wsuit 种类  wface 牌面
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
//验证手中的牌
void yanzheng(int hang[], int lie[] )
{
void paixu(int [] ,int );                    //排序,主要为了验证是否是顺子
void yantong(int array[] ,int same[],   //验证相同的对牌函数
     int size ,int count );      //参数2为选择A的牌还是B的牌
            //0表示A 1表示B
int yanhuase(int [],int );     //验证是否有同花 参数2 同上
int shunzi(int [],int );                //验证是否是顺子
int bijiao(int [], int[], int[], int, int, int, int ); //比较牌大小
int play[ 3 ] = { 0 }; //A
int game[ 3 ] = { 0 }; //B
int count = 0;          //验证手里的对数
int playse = 0;         //A是否是同花
int gamese = 0;     //B是否是同花
int plays = 0;          //A是否是顺子
int games = 0;          //B是否是顺子
int result = 0;         //比较结果
//玩家A牌
playse = yanhuase(hang, 0 );
paixu(lie, 0 );
plays = shunzi(hang, 0 );
yantong(lie, play, 0 ,count );
//玩家B牌
gamese = yanhuase(hang, 1 );
paixu(lie, 1 );
games = shunzi(hang, 1 );
yantong(lie, game, 1 ,count );
//比较牌
result= bijiao(play, game, lie, plays, games, playse, gamese ) ;
if(result == 0 )
   cout<< "玩家B赢!\n" << endl;
else if(result == 1 )
   cout<< "玩家A赢!\n" << endl;
else
   cout<< "难得一见的平局啊!\n" << endl;
//int a = 0, b = 0, c = 0;
////int count = 0;          //验证手里的对数
////int playse = 0;         //A是否是同花  a
////int gamese = 0;     //B是否是同花 
////int plays = 0;          //A是否是顺子
////int games = 0;          //B是否是顺子
////int result = 0;         //比较结果
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
//printf("同花顺的概率：%d\n", p);
//printf("%d\n", p);
//printf("顺子的概率：%d\n", pp);
//printf("%d\n", pp);
//printf("对子的概率：%d\n", ppp);
//printf("%d\n", ppp);

}
//验证对牌
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
	if(array[ 4 + size ] == same[ count ])   //补充可能遗留的最后一位也属于对数之一
   {
    same[ count + 1 ] =array[ 4 + size ];
   }
}
count = 0;
if( same[ count ] != 0 )
   if(size ==0 )  
    cout << "玩家A拥有对牌: ";
   else
    cout << "玩家B拥有对牌: " ; 
while( same[ count ] != 0) //打印出来对牌
{
   cout << same[ count++ ] + 1 << " ";
}
if(count != 0 )
   cout << endl;


}

//验证是否有同花
int yanhuase(int lie[],int size )
{

int num;
num = lie[ size ];
for(int i = size; i < 6; i += 2 )
{
   if(num != lie[ i ])
    return 0;     //表示不是同花
}
return 1;             //表示同花
}

//给牌排序
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

//验证是否是顺子
int shunzi(int hang[],int size )
{
for(int i = size; i < 6; i += 2 )
{
   for(int j = i; j < 6 - 1; j += 2 )
   {
    if(hang[ j + 2 ] != hang[ j ] + 1 )
    {
     return 0;                            //不是顺子
    }
   }
}
return 1;                                        //顺子

}

//比较牌大小
int bijiao(int play[], int game[], int lie[],
     int plays, int games, int playse, int gamese )
{
int num1 = 0; //玩家A对子数量
int num2 = 0; //B对子数量
//同花顺 与 同花 判断
if(playse == 1 && gamese == 1 )    //都是同花
{
	if(plays == 1 && games == 1 ) //都是同花顺
   {  
    if(play[ 0 ] < game[ 0 ] )
   
     return 0;             //B同花顺大
    else
     return 1;             //玩家A同花顺大
   }
   else if(plays == 1 && games == 0 ) //玩家A同花顺
    return 1;
   else if(plays == 0 && games == 1 ) //B同花顺
    return 0;
}
else if(playse == 1 && gamese == 0 ) //玩家A同花
   return 1;
else if(playse == 0 && gamese == 1 ) //B同花
   return 0;
//顺子判断
if(plays == 1 && games == 1 ) //都是顺子
{
   if(play[ 0 ] < game[ 0 ] )
    return 0;             //B顺大
   else
    return 1;             //玩家A顺大
}
else if(plays == 1 && games == 0 ) //玩家A顺
   return 1;
else if(plays == 0 && games == 1 ) //B顺
   return 0;
while( play[ num1++ ] != 0 ) //计算玩家A对子数
   ;
while( game[ num2++ ] != 0 ) //计算B对子数
   ;
num1--;
num2--;
if(num1 != 0 || num2 != 0 )   //有对子存在
{
   if(num1 < num2 )    //B对子多
    return 0;
   else if(num1 > num2 )
    return 1;     //玩家A对子多
   else if(num1 == num2 )       //一样多的对子
   {
    if(play[ num1 - 1 ] < game[ num2 - 1]) 
     return 0;    //B对子点数大
    else if (play[ num1 - 1 ] > game[ num2 - 1 ])
     return 1;           //玩家A对子点数大
    else
     return 2;
   }
}
for(int i = 2; i >= 0; i-- )   //没有对子比点数
{
	 if(lie[ 2 * i ] < lie[ 2 * i + 1 ] )
    return 0;                        // 玩家B大
}
return 1;      //玩家A点数大


}

//
//int  gailv(int plays, int games, int playse, int gamese,int count)
//{
//	int a = 0, b = 0,c=0;
//	//int count = 0;          //验证手里的对数
//	//int playse = 0;         //A是否是同花  a
//	//int gamese = 0;     //B是否是同花 
//	//int plays = 0;          //A是否是顺子
//	//int games = 0;          //B是否是顺子
//	//int result = 0;         //比较结果
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
//	printf("同花顺的概率：%d\n", p);
//	printf("%d\n", p);
//	printf("顺子的概率：%d\n", pp);
//	printf("%d\n", pp);
//	printf("对子的概率：%d\n", ppp);
//	printf("%d\n", ppp);
//	return 1;
//}

int js()
{
	int a = 0;
	a++;
	return a;
}