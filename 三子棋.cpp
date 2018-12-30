#define _CRT_SECURE_NO_WARNINGS
#define ROWS 3
#define COLS 3

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
	
void menu()     //菜单
{
	printf("-----------------------\n");
	printf("*      1.开始游戏     *\n");
	printf("*      0.离开游戏     *\n");
	printf("-----------------------\n");
}

void show(char board[ROWS][COLS], int rows, int cols)      //键盘显示函数
{
	for (int i = 0; i < rows; i++)
	{
		printf("  %c | %c | %c  \n", board[i][0], board[i][1], board[i][2]);
		if (i != rows - 1)
			printf(" ---|---|--- \n");
	}
}

void init_board(char board[ROWS][COLS], int rows, int cols)  //数组初始化
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ' ';      //初始化空格字符
		}
	}
}

void computer(char board[ROWS][COLS], int rows, int cols)   //键盘操作
{

	int x, y;
	printf("键盘操作：\n");
	while (1)
	{
		x = rand() % rows;
		y = rand() % cols;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}

void play(char board[ROWS][COLS], int rows, int cols)   //用户操作
{
	int x, y;
	printf("用户操作:\n");
	while (1)
	{
		printf("请输入坐标（x y):\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= rows && y >= 1 && y <= cols)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
			else printf("已经有棋子，请重新输入坐标！\n");
		}
		else printf(" 输入错误!请重试！\n");
	}
}

static int is_full(char board[ROWS][COLS], int rows, int cols)    //棋盘下满
{ 
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char check_win(char board[ROWS][COLS], int rows, int cols)   //检测
{
	int i;
	for (i = 0; i < rows; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < cols; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	else if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	else if (is_full(board, rows, cols))
		return 'p';
	return 0;
}

void game()    //游戏执行
{
	char win = 0;
	char board[ROWS][COLS];
	init_board(board, ROWS, COLS);    //数组初始化
	do
	{
		computer(board, ROWS, COLS);    //电脑操作
		show(board, ROWS, COLS);      //显示
		win = check_win(board, ROWS, COLS);   //输赢的判断
		if (win != 0)
			break;
		play(board, ROWS, COLS);   //用户操作
		show(board, ROWS, COLS);     //显示 
		win = check_win(board, ROWS, COLS);     //输赢判断
	} while (win == 0);
	if (win == 'X')
		printf("失败!\n");
	if (win == 'O')
		printf("你赢了!\n");
	if (win == 'p')
		printf("平局!\n");
}

int main()
{
	int choice;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入操作:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf(" 输入错误，请重新输入！\n");
			break;
		}
	} while (choice);
	system("pause");
	return 0;
}

