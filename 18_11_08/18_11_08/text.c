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
	printf("������һ������\n");
	scanf_s("%d", &y);
	if (Prime(&y))
		printf("������\n");
	else
		printf("��������\n");
	system("pause");
}