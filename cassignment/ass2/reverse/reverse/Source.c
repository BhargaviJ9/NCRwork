#include<stdio.h>
#include<conio.h>
int main()
{
	int num, rev = 0;
	scanf_s("\n%d", &num);
	while (num)
	{
		rev = rev * 10 + (num % 10);
		num = num / 10;
	}
	printf("\n reverse=%d", rev);
	system("pause");
	return 0;
}