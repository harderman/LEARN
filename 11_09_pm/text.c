#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	printf("������һ���ַ�:\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			ch = ch - 32;
			printf("%c\n", ch);
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c\n", ch + 32);
			ch = ch + 32;
		}
		else
		if (ch >= '0'&&ch <= '9')
			;
		else
			;
	}
	printf("\n");
	system("pause");
}
