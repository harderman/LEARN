#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(unsigned int value)
{
	int a = 0;
	int b = 0;
	for (int i = 1; i < 32; i++)
	{
		a = value & 1;
		value = value >> 1;
		b = a | b;
		b = b << 1;
	}
	return b;
}

int main()
{
	int number = 0;
	printf("ÇëÊäÈëÊı×Ö\n");
	scanf_s("%d",&number);
	printf("%u", reverse_bit(number));
	system("pause");
}