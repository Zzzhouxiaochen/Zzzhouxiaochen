#define COLS 12
#define ROWS 12
#define COL 10
#define ROW 10
#define MINES 10
#define _CRT_SECURE_NO_WARNINGS

void init_mines(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols, int row, int col);
void display(char mine[ROWS][COLS], int row, int col);
int checkwin(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void menu()
{
	printf("------------------");
	printf("    1.游戏开始    ");
	printf("    2.离开游戏    ");
	printf("------------------");
}
	void display(char mine[ROWS][COLS], int row, int col)   //显示函数
{
		int i, j;
		for (i = 1; i <= row; i++)
		{
			printf("%4d", i);
		}
		printf("\n");
		for (i = 1; i <= col; i++)
		{
			printf("%2d", i);
			for (j = 1; j <= col; j++)
			{
				printf(" %c  ", mine[i][j]);
			}
			printf("\n");
		}
}


void game()
{
	char mines[ROWS][COLS], show_area[ROWS][COLS], ret;
	int x, y;
	init_mines(mines, show_area, ROWS, COLS, ROW, COL);
	display(show_area, ROW, COL);
	while (1)
	{
		printf("Input x and y(like x y):");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			ret = checkwin(mines, show_area, ROW, COL, x, y);
			if (ret == 'w')
			{
				display(mines, ROW, COL);
				printf("Congratulations！You win!\n");
				break;
			}
			else if (ret == '*')
			{
				display(mines, ROW, COL);
				printf("You lose!Good luck next time!\n");
				break;
			}
			else
			{
				display(show_area, ROW, COL);
				printf("\n");
			}
		}
		else printf("Input error!Please try again.\n");
	}
}

void init_mines(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols, int row, int col)  //雷区数组
{
	int i, x, y;
	memset(mine, '0', rows*cols*sizeof(char));   //雷区数组
	memset(show, '.', rows*cols*sizeof(char));    //显示区数组
	for (i = 0; i < MINES; i++)
	{
		while (1)
		{
			x = rand() % row + 1;  
			y = rand() % col + 1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
				break;
			}
		}
	}
}

static char checkmine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)   //周围的雷区
{
	int m, n;
	char mine_count = '0';
	for (m = x - 1; m <= x + 1; m++)
	{
		for (n = y - 1; n <= y + 1; n++)
		{
			if (mine[m][n] == '1')
				mine_count++;
		}
	}
	return mine_count;
}

int checkwin(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)   //判断胜利条件
{
	int count = 0;
	if (mine[x][y] == '0')
		show[x][y] = checkmine(mine, show, x, y);
	else return '*';
	for (x = 1; x <= row; x++)
	{
		for (y = 1; y <= col; y++)
		{
			if (show[x][y] == '.')
				count++;
		}
	}
	if (count == MINES)
		return 'w';
	return 0;
}

int main()
{
	int choice;
	srand((unsigned int)time(NULL));    //只产生一个随机数
	do
	{
		menu();
		printf("请输入你的选择:");
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