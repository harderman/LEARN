#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("ÇëÊäÈëÁ©¸öÊı\n");
	scanf_s("%d",&a);
	scanf_s("%d",&b);
	for (int i = 0; i <= 32;i++)
	{
		if ((((b ^ a) >> i) & 0x1) == 1)
			c++;
	}
	printf("%d\n",c);
	system("pause");
}