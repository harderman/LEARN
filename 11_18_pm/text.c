#include<stdio.h>
#include<stdlib.h>
int fac(int n)
{
	int a = 1;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else

	for (int i = 1; i <= n; i++)
	{
		a = a*i;
	}
	return a;
}

//void main()
//{
//	int b = 0;
//	int x = 0;
//	int y = 0;
//	int a = 0;
//	printf("��������Ҫ��ӡ������ǵ�����\n");
//	/*scanf_s("%d",&a);*/
//	for (int n = 2; n <= a; n++)
//	{
//		for (int m = 1; m <= n + 1; m++)
//		{
//			y = fac(n); b = fac((n - m)); x = fac(m);
//			int t = y / (b*x);
//			printf("%d\n", t);
//		}
//		printf("\n");
//	}
	//printf("%d\n", fac(6));


	/*int a[10][10];
	int i, j;
	for (i = 0; i <= 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i <= 10; i++)
	{
		for (j = 2; i <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");

}*/
#include<stdio.h>
#include<stdlib.h>

main()

{

	int i, j, a[11][11];                             /*����i��j��a[11][11]Ϊ��������*/

	for (i = 1; i < 11; i++)                     /*forѭ��i�ķ�Χ��1��10*/

	{

		a[i][i] = 1;                             /*�Խ���Ԫ��ȫΪ1*/

		a[i][1] = 1;                             /*ÿ�е�һ��Ԫ��ȫΪ1*/

	}

	for (i = 3; i < 11; i++)                     /*forѭ����Χ�ӵ�3�п�ʼ����10��*/

	for (j = 2; j <= i - 1; j++)                 /*forѭ����Χ�ӵ�2�п�ʼ������������һ��Ϊֹ*/

		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*��i��j�е��ڵ�i-1��j-1�е�ֵ���ϵ�i-1��j�е�ֵ*/

	for (i = 1; i < 11; i++)

	{

		for (j = 1; j <= i; j++)

			printf("%4d", a[i][j]);              /*ͨ����������forѭ������ά����a��Ԫ�����*/

		printf("\n");                            /*ÿ�����һ�н���һ�λ���*/

	}
	system("pause");
}