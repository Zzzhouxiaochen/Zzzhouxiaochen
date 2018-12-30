#define _CRT_SECURE_NO_WARNINGS
#define ROWS 3
#define COLS 3

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
	
void menu()     //�˵�
{
	printf("-----------------------\n");
	printf("*      1.��ʼ��Ϸ     *\n");
	printf("*      0.�뿪��Ϸ     *\n");
	printf("-----------------------\n");
}

void show(char board[ROWS][COLS], int rows, int cols)      //������ʾ����
{
	for (int i = 0; i < rows; i++)
	{
		printf("  %c | %c | %c  \n", board[i][0], board[i][1], board[i][2]);
		if (i != rows - 1)
			printf(" ---|---|--- \n");
	}
}

void init_board(char board[ROWS][COLS], int rows, int cols)  //�����ʼ��
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ' ';      //��ʼ���ո��ַ�
		}
	}
}

void computer(char board[ROWS][COLS], int rows, int cols)   //���̲���
{

	int x, y;
	printf("���̲�����\n");
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

void play(char board[ROWS][COLS], int rows, int cols)   //�û�����
{
	int x, y;
	printf("�û�����:\n");
	while (1)
	{
		printf("���������꣨x y):\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= rows && y >= 1 && y <= cols)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
			else printf("�Ѿ������ӣ��������������꣡\n");
		}
		else printf(" �������!�����ԣ�\n");
	}
}

static int is_full(char board[ROWS][COLS], int rows, int cols)    //��������
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

char check_win(char board[ROWS][COLS], int rows, int cols)   //���
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

void game()    //��Ϸִ��
{
	char win = 0;
	char board[ROWS][COLS];
	init_board(board, ROWS, COLS);    //�����ʼ��
	do
	{
		computer(board, ROWS, COLS);    //���Բ���
		show(board, ROWS, COLS);      //��ʾ
		win = check_win(board, ROWS, COLS);   //��Ӯ���ж�
		if (win != 0)
			break;
		play(board, ROWS, COLS);   //�û�����
		show(board, ROWS, COLS);     //��ʾ 
		win = check_win(board, ROWS, COLS);     //��Ӯ�ж�
	} while (win == 0);
	if (win == 'X')
		printf("ʧ��!\n");
	if (win == 'O')
		printf("��Ӯ��!\n");
	if (win == 'p')
		printf("ƽ��!\n");
}

int main()
{
	int choice;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf(" ����������������룡\n");
			break;
		}
	} while (choice);
	system("pause");
	return 0;
}

