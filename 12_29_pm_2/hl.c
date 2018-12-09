#include<stdio.h>
#include<stdlib.h>
int find(int a[],int n)
{
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		ret ^= a[i];

	}
	return ret;
}
int main()
{
	int a[] = {1,2,5,8,7,15,1,2,5,8,7};
	printf("%d\n",find(a,sizeof(a)/sizeof(a[0])));
	system("pause");
}