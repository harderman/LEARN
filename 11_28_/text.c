#include<stdio.h>
#include<stdlib.h>
int avg(int a, int b)
{
	return(a & b) + ((a ^ b) >> 1);
}
int main()
{ 
printf("������������/n");
	int a = 4;
	int b = 6;
    scanf_s("%d",&a,&b);
	printf("%d\n", avg(a, b));
	system("pause");
}
//��ƽ��