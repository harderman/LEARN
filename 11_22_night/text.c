#include<stdio.h>
#include<stdlib.h>

	/*����ݹ麯��*/
	int fish(int n, int x)
		{
		    if ((x - 1) % 5 == 0)
			    {
			        if (n == 1)
			            return 1;  /*�ݹ����*/
			     else
			           return fish(n - 1, (x - 1) / 5 * 4);  /*�ݹ����*/
			    }
		    return 0;  /*x���Ƿ�������Ľ⣬����0*/
		}
	int main()
		{
		    int i = 0, flag = 0, x;
		    do
		    {
			        i = i + 1;
			        x = i * 5 + 1;  /*x��СֵΪ6���Ժ�ÿ������5*/
			        if (fish(5, x))  /*��x�������ݹ麯�����м���*/
				        {
				            flag = 1;  /*�ҵ���һ�����������x���ñ�־λΪ1*/
				          printf("����˺ϻﲶ����������Ϊ%d\n", x);
				      }
			    }
		    while (!flag);  /*δ�ҵ����������x������ѭ���������˳�ѭ��*/
			system("pause");
	}
		