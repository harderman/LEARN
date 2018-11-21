#include<stdio.h>
#include<stdlib.h>

int cout(int num)
{
	if (num < 10)
	return num;
	else
	{
		int n = 0;
		n = num % 10;
		/*cout(num / 10); */
		/*printf("%d\n",n);*/
		cout(num / 10);
	}
}


int main()
{
	int a = 123;
	printf("请输入一个整数\n");
	scanf_s("%d",&a);
	printf("%d\n",cout(a));
	system("pause");
}