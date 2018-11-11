#include<stdio.h>
#include<stdlib.h>
int out(int n)
{
	if (n<10)
		printf("%d\n", n);
	else if (n >= 10)
	{
		out(n / 10);
		printf("%d\n", n % 10);
	}
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	out(a);
	system("pause");
}