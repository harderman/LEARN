//#include<stdlib.h>
//#include <stdio.h>
//int main(){
//	int    a = 1;
//	double sum = 1.0;
//	double i;
//	for (i = 2; i <= 100; i++)
//	{
//		a = (-1) * a;
//		sum = sum + a / i;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*int i = 0;
	int a = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9||i % 10 == 9)
			a++;
	}
	printf("%d\n", a);
	system("pause");*/
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 8; i < 14; i++)
	{
		for (j = 1; j <= 27 - 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}

