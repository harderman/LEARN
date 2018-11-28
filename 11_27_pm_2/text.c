#include<stdio.h>
#include<stdlib.h>
double Mean(int a, int b)
{
	if (a > b)
	{
		double number = 0.0;
		number = (a - b) / 2;
		return (b + number);
	}
	else if (a < b)
	{
		double number = 0.0;
		number = (b - a) / 2;
		return  (number + a);
	}
	else
	{
		return a;
	}
}
int main()
{
	int x = 0;
	int y = 0;
	printf("请输入要取平均的俩个数\n");
	scanf_s("%d %d",&x,&y);
	printf("%f\n",Mean(x,y));
	system("pause");
}

