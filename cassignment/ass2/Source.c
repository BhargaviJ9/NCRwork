#include<stdio.h>

int main()

{

	int dec_num = 0, num, bin_num, base = 1, r;

	printf("the binary number is:\n");

	scanf_s("%d", &num);

	bin_num = num;

	while (num > 0)

	{

		r = num % 10;

		dec_num = dec_num + r * base;

		num = num / 10;

		base = base * 2;



	}

	printf("%d", dec_num);

	scanf_s("%d", &num);
	getch();
	return 0;

}