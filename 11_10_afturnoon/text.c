#include <stdio.h>
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
}//·Çµİ¹é
int fac1(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return  n* fac(n - 1);
}//µİ¹é
int main()
{
	int n = 3;
	scanf_s("%d\n", &n);
	printf("%d\n", fac(n));
	printf("%d\n", fac1(n));
	system("pause");
}