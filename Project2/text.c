#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*int max;
	int a[10] = { 1, 20, 3, 4, 5, 6, 7, 8, 9, 10 };
	max = a[0];
	for (int i = 1; i<10; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	printf("max = %d\n", max);*/
	/*{
		int i = 1; int j = 3; int k = 13, t;
		
		if (j>i)
		{
			t = i;
			i = j;
			j = t;
		}
		if (k>i)
		{
			t = i;
			i = k;
			k = t;
		}
		if (k>j)
		{
			t = j;
			j = k;
			k = t;
		}
		printf("%d,%d,%d\n", i, j, k);*/
	//}
	int A[5] = { 1, 3, 5, 7, 9 };
	int B[5] = { 2, 4, 6, 8, 10 };
	int C[5] = { 0, 0 ,0 ,0, 0};
	
	for (int i = 0; i < 5; i++)
	{
		C[i] = A[i];
		A[i] = B[i];
		B[i] = C[i];
		 printf("%d ", A[i]);
		/* while (i % 4 != 0)
		 {
			 printf("%d ", A[i]);
		 }
			printf("\n");*/
		printf("%d" , B[i]);
	}
	system("pause");
	return 0;
}