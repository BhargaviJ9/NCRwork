#include<stdio.h>
int main()
{
	int num,hex[10], i = 0, rem,j;
	printf("enter a number in binary");
	scanf_s("%d", &num);
	while (num > 0)
	{
		rem = num % 16;
		num = num / 16;
		if (rem <= 9)
		{
			hex[i] = 48 + rem;
			i++;
		}
		else
		{
			hex[i] = 55 + rem;
			i++;
		}
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", hex[j]);
	}
	getch();
	return 0;
}