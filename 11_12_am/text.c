#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	int sum = 0;
	int c = 0;
	printf("������һ������\n");
	scanf_s("%d", &a);
	for (b = 1; b < 6; b++)
	{
		c = a + c * 10;
		sum = sum + c;
	}
	printf("%d\n", sum);
	system("pause");
}
