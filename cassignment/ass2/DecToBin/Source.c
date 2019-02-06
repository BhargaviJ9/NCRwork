#include<stdio.h>
int main()
{
	int dec_num = 0, num, base = 1, r, sum = 0;
	printf("the decimal number is:\n");
	scanf_s("%d", &num);
	while (num > 0)
	{
		r = num % 2;
		sum = sum + (r * base);
		num = num / 10;
		base = base * 10;
	}
	printf("%d", sum);
	getch();
	return 0;
}