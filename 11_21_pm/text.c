#include<stdio.h>
#include<stdlib.h>

#define MAX_ROW 10
#define MAX_COL 10
#define DEFAULT_MINE_COUNT 10

int Menu()
{
	printf("************************\n");
	printf("************************\n");
	printf("*******1.开始游戏*******\n");
	printf("*******0.退出游戏*******\n");
	printf("************************\n");

	int choice = 0;
	while (1)
	{
		scanf_s("%d", &choice);
		if (choice == 1 || choice == 0)
		{
			return choice;
			break;
		}
		else
			printf("无此选项，请重新输入\n");
	}
}
void Init(char show_map[MAX_ROW + 2][MAX_COL + 2],
	char mine_map[MAX_ROW + 2][MAX_COL + 2])
{
	for (int row = 0; row < MAX_ROW + 2; row++)
	{
		for (int col = 0; col < MAX_COL + 2; col++)
		{
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW + 2; row++)
	{
		for (int col = 0; col < MAX_COL + 2; col++)
		{
			mine_map[row][col] = '0';
		}
	}
	int mine_count = DEFAULT_MINE_COUNT;
	while (mine_count > 0)
	{
		int row = rand() % 10 + 1;
		int col = rand() % 10 + 1;
		if (mine_map[row][col] == '1')
		{
			continue;
		}
		mine_map[row][col] = '1';
		mine_count--;
	}
}
void DisplayMap(char map[MAX_ROW + 2][MAX_COL + 2])
{
	printf("    ");
	for (int i = 1; i <= MAX_COL; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= MAX_COL; i++)
	{
		printf("---");
	}
	printf("\n");
	for (int row = 1; row <= MAX_ROW; row++)
	{
		printf("%02d| ", row);
		for (int col = 1; col <= MAX_COL; col++)
		{
			printf("%c ", map[row][col]);

		}
		printf("\n");
	}
}
void Updateshowmap(char show_map[MAX_ROW + 2][MAX_COL + 2],
	char mine_map[MAX_ROW + 2][MAX_COL + 2], int row, int col)
{
	int mine_cnt = (mine_map[row - 1][col - 1] - '0') +
		(mine_map[row - 1][col] - '0') +
		(mine_map[row - 1][col + 1] - '0') +
		(mine_map[row][col - 1] - '0') +
		(mine_map[row][col + 1] - '0') +
		(mine_map[row + 1][col - 1] - '0') +
		(mine_map[row + 1][col] - '0') +
		(mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_cnt;
	if (show_map[row][col] == '0')
	{
		show_map[row - 1][col - 1] = '0';
		show_map[row - 1][col] = '0';
		show_map[row - 1][col + 1] = '0';
		show_map[row][col - 1] = '0';
		show_map[row][col + 1] = '0';
		show_map[row + 1][col - 1] = '0';
		show_map[row + 1][col] = '0';
		show_map[row + 1][col + 1] = '0';
	}
}
void Game()
{
	char show_map[MAX_ROW + 2][MAX_COL + 2];
	char mine_map[MAX_ROW + 2][MAX_COL + 2];
	int black_cnt = 0;
	Init(show_map, mine_map);
	DisplayMap(show_map);
	while (1)
	{
		int row = 0;
		int col = 0;
		printf("请输入坐标\n");
		scanf_s("%d %d", &row, &col);
		if (row <= 0 || row > MAX_ROW || col <= 0 || col > MAX_COL)
		{
			printf("输入非法，请重新输入\n");
			continue;
		}
		if (mine_map[row][col] == '1')
		{
			printf("游戏结束\n");
			DisplayMap(mine_map);
			break;
		}
		black_cnt++;
		if (black_cnt == MAX_ROW * MAX_COL - DEFAULT_MINE_COUNT)
		{
			printf("扫雷成功\n");
			DisplayMap(mine_map);
			break;
		}
		Updateshowmap(show_map, mine_map, row, col);
		DisplayMap(show_map);
	}
}
void start()
{
	while (1)
	{
		int choice = Menu();
		if (choice == 0)
		{
			break;
		}
		Game();
	}
}
int main()
{
	start();
	system("pause");
}