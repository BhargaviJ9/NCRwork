#include<stdio.h>
#include<conio.h>
void prime(int a, int b)
{
	int i, flag = 0, j;
	printf("\n prime numbers \n");
	for (i = a; i <= b; i++)
	{
		flag = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)flag = -1;
		}
		if (flag == 0)printf("\n%d", i);
	}
}
int main()
{
	int a, b,c;
	scanf_s("\n%d %d", &a, &b);
	prime(a, b);
	scanf_s("%d", &c);
	return 0;
}