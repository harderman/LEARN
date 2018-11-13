#include <stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include<stdlib.h>
char * reverse_string(char *p){
	int n = 0;
	char temp;
	char *q;
	q = p;
	while (*p != 0){
		n++;
		p++;
	}
	if (n > 1)
	{
		temp = q[0];
		q[0] = q[n - 1];
		q[n - 1] = '\0';
		reverse_string(q + 1);
		q[n - 1] = temp;
	}
	return q;
}

int main()
{
	char p[] = "abcd";
	printf("原字符串是：%s\n", p);
	printf("翻转后的字符串是：%s\n", reverse_string(p));
	system("pause");
	return 0;
}
