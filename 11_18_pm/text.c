#include<stdio.h>
#include<stdlib.h>
int fac(int n)
{
	int a = 1;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else

	for (int i = 1; i <= n; i++)
	{
		a = a*i;
	}
	return a;
}

//void main()
//{
//	int b = 0;
//	int x = 0;
//	int y = 0;
//	int a = 0;
//	printf("请输入想要打印杨辉三角的行数\n");
//	/*scanf_s("%d",&a);*/
//	for (int n = 2; n <= a; n++)
//	{
//		for (int m = 1; m <= n + 1; m++)
//		{
//			y = fac(n); b = fac((n - m)); x = fac(m);
//			int t = y / (b*x);
//			printf("%d\n", t);
//		}
//		printf("\n");
//	}
	//printf("%d\n", fac(6));


	/*int a[10][10];
	int i, j;
	for (i = 0; i <= 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i <= 10; i++)
	{
		for (j = 2; i <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");

}*/
#include<stdio.h>
#include<stdlib.h>

main()

{

	int i, j, a[11][11];                             /*定义i，j，a[11][11]为基本整型*/

	for (i = 1; i < 11; i++)                     /*for循环i的范围从1到10*/

	{

		a[i][i] = 1;                             /*对角线元素全为1*/

		a[i][1] = 1;                             /*每行第一列元素全为1*/

	}

	for (i = 3; i < 11; i++)                     /*for循环范围从第3行开始到第10行*/

	for (j = 2; j <= i - 1; j++)                 /*for循环范围从第2列开始到该行行数减一列为止*/

		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*第i行j列等于第i-1行j-1列的值加上第i-1行j列的值*/

	for (i = 1; i < 11; i++)

	{

		for (j = 1; j <= i; j++)

			printf("%4d", a[i][j]);              /*通过上面两次for循环将二维数组a中元素输出*/

		printf("\n");                            /*每输出完一行进行一次换行*/

	}
	system("pause");
}