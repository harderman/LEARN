#include <stdio.h>
#include<stdlib.h>
int mi(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return mi(n, k - 1)*mi(n, 1);
}
int main()
{
	int x = 0;
	int y = 0;
	putchar("x, y");
	printf("%d\n", mi(x, y));
	system("pause");
}