#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int ch;
//	printf("请输入一个字符:\n");
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			ch = ch - 32;
//			printf("%c\n", ch);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//			ch = ch + 32;
//		}
//		else
//		if (ch >= '0'&&ch <= '9')
//			;
//		else
//			;
//	}
//	printf("\n");
//	system("pause");
//}
void output(int a)
{
	int i, j;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%2d ", i, j, i*j);
		putchar('\n');
	}
}
int main()
{
	printf("请输入要打印的行列数\n");
	int a = 0;
	scanf_s("%d", &a);
	output(a);
	system("pause");
}

