#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, x, c;
	for (a = 100; a < 1000; a++)
	{
		b = a / 100;
		c = a / 10 % 10;
		x = a % 10;
		if (a == b*b*b + c*c*c + x*x*x)
			printf("%d\n", a);
	}
	system("pause");
}
