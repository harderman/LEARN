#include<stdio.h>
#include<stdlib.h>
int Prime(int *x)
{
	int a = 2;
	for (; a<*x; a++)
	{
		if (*x == 2)
			return 1;
		if (*x%a == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int y = 0;
	printf("请输入一个整数\n");
	scanf_s("%d", &y);
	if (Prime(&y))
		printf("是素数\n");
	else
		printf("不是素数\n");
	system("pause");
}