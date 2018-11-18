#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a < 6; a++)
	{
		for (b = 1; b < 6; b++)
		{
			for (c = 1; c < 6; c++)
			{
				for (d = 1; d < 6;d++)
				{
					for (e = 1; e < 6;e++)
					{
						if (a != b && a != c && a != d && a != e &&
							b != c && b != d && b != e && c != d &&
							 c != e && d != e)
						{
							if (((b == 2 && a != 3)||(b != 2 && a == 3) == 1)
								&&((b == 2 && e != 4) || (b != 2 && e == 4) == 1)
								&&((c == 1 && d != 2) || (c != 1 && d == 2) == 1)
								&&((c == 5 && d != 3) || (c != 5 && d == 3) == 1)
								&&((e == 4 && a != 1) || (e != 4 && a == 1) == 1))
							{
								printf(" a = %d\n b = %d\n c = %d\n d = %d\n e = %d\n",
									a,b,c,d,e);
							}
						}
					}
				}
			}
		}
	}




	system("pause");
}