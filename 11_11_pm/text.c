#include <stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
	if (n<10)
		return n;
	else if (n >= 10 && n<100)
	{
		int a = 0;
		int b = 0;
		a = n / 10 % 10;
		b = n % 10;
		return  a + b;
	}
	else
		return DigitSum(n / 10) + n % 10;
}
int main()
{
	int n = 1729;
	printf("%d\n", DigitSum(n));
	system("pause");
}