#include <stdio.h>
#include<stdlib.h>
int fab(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
		return 1;
	while (n >2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}//·Çµİ¹é
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}//µİ¹é

int main()
{
	int x = 0;
	scanf_s("%d\n", &x);
	printf("%d\n", fab(x));
	printf("%d\n", fib(x));
	system("pause");
}