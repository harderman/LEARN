#include<stdio.h>
#include<stdlib.h>

int count_one_bits(unsigned int value)
{
	int num = 1;  
	int i = 0;  
	int count = 0;//计数  
	for(i=0; i<32; i++)   
	{        
		if( ((value>>i)&1) == 1 )  
			count++;  
	} 
	return count;
}

int main()
{
	int value = 0;
	printf("请输入数字\n");
	scanf_s("%d",&value);
	printf("%d\n",count_one_bits(value));
	system("pause");
}