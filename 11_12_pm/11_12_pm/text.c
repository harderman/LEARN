#include <stdio.h>
#include<stdlib.h>
int longe(char *str)
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
}
//·ÇµÝ¹é
int string(char*x)
{
	int count = 0;
	if (*x != 0)
	{
		count = 1 + string(x + 1);
	}
	return  count;
}
int main()
{
	char a[] = "abcde";
	printf("%d\n", longe(a));
	printf("%d\n", string(a));
	system("pause");
}