#include<stdio.h>
#include<stdlib.h>


int main()
{
	int value[32] = { 0 };
	int number = 0;
	printf("请输入一个数字\n");
	scanf_s("%d",&number);
	for (int i = 0; i < 32; i++)
	{
		int b = 0x1;
		if ((number >> i)& b)
		{
			value[i] = 1;
		}
		else
		{
			value[i] = 0;
		}
		
		printf("%d", value[i]);
	}
	
	system("pause");
}