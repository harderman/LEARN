#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	unsigned int sum = 0;
	for (int i = 1; i <= 32; i++)
	{
		sum = sum + ((value >> (i - 1)) & 1) * pow(2, (32 - i));
	}
	return sum;
}
int main()
{
	int a = 25;
	printf("请输入想翻转的数字\n");
	scanf_s("%u",&a);
	printf("%u\n",reverse_bit(a));
	system("pause");
}