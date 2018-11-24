#include<stdlib.h>
#include<stdio.h>

int arr[32] = { 0 };

int main()
{
	int number = 15;
	printf("请输入二进制序列\n");
	scanf_s("%d",&number);
	for (int i = 0; i < 32; i++)
	{
		int b = 0x1;
		if ((number >> i)& b)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}
	}
	for ( int i = 31; i > 0;i = i - 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("上面是偶数列，下面是奇数列\n");
	for (int i = 30; i >= 0; i = i - 2)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
}





