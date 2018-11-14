#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 3
#define COL 3
char g_baord[ROW][COL];

void Init()
{
	srand((unsigned int)time(NULL));
	for (int row = 0; row <= ROW; row++)
	{
		for (int col = 0; col <= COL; col++)
		{
			 g_baord[row][col] = ' ';
		}
	}
}
void Print()
{
	for (int row = 0; row <ROW; row++)
	{
		printf("| %c| %c| %c\n", g_baord[row][0], g_baord[row][1],
			g_baord[row][2]);
		printf("|--|--|--\n");
	}

}
void playermove()
{
	printf("���������\n");
	printf("�������������\n"); 
	while (1)
	{
		int row, col;
		scanf_s("%d %d", &row, &col);
		if (row >= ROW || col >= COL || row < 0 || col < 0)
		{
			printf("����������\n");
			continue;
		}
		if (g_baord[row][col] != ' ')
		{
			printf("�ô������ӣ��������������\n");
			continue;
		}
		g_baord[row][col] = 'x';
		break;
	}
}
void com_move()
{
	printf("���������\n");
	while (1)
	{
		int row, col;
		row = rand() % ROW;
		col = rand() % COL;
		if (g_baord[row][col] != ' ')
		{
			continue;
		}
		g_baord[row][col] = 'o';
		break;
	}
}
char check(char a,char b)
{
	for (int row = 0; row <= ROW; row++)
	{
		if (g_baord[row][0] == g_baord[row][1] &&
			g_baord[row][0] == g_baord[row][2] &&
			g_baord[row][0] != ' ')
			return  a=g_baord[row][0];
	}
	for (int col = 0; col <= COL; col++)
	{
		if (g_baord[0][col] == g_baord[1][col] &&
			g_baord[0][col] == g_baord[2][col] &&
			g_baord[0][col] != ' ')
			return b =g_baord[0][col];
	}
	if (g_baord[0][0] == g_baord[1][1] &&
		g_baord[0][0] == g_baord[2][2] &&
		g_baord[0][0] != ' ')
		return a = g_baord[0][0];
	if (g_baord[0][2] == g_baord[1][1] &&
		g_baord[0][2] == g_baord[2][0] &&
		g_baord[0][2] != ' ')
		return b= g_baord[0][2];
	for (int row = 0; row <= ROW; row++)
	{
		for (int col = 0; col <= COL; col++)
		{
			if (g_baord[row][col] == ' ')
				break;
		}
	}
	return 0;
}
int main()
{
	printf("****************************\n");
	printf("**** ��ӭ������������Ϸ ****\n");
	Init();
	Print();
	char a=0;
	char b=0;
	while (1)
	{
		playermove();
		Print();
		check(a, b);
		if (check(a, b) == '0' || check(a, b) == 'x' || check(a, b) == 'o')
		{
			break;
		}
		com_move();
		Print();
		check(a,b);
		if (check(a, b) == '0' || check(a, b) == 'x' || check(a, b) == 'o' )
		{
			break;
		}
	} 
	if (check(a, b) == 'x')
		printf("��һ�ʤ\n");
	if (check(a, b) == 'o')
		printf("���Ի�ʤ\n");
	if (check(a, b) == '0')
		printf("����\n");
	system("pause");
}