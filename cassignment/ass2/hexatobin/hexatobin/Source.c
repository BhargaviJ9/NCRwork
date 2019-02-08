#include<stdio.h>
int bin(int);
int main()
{
	int i,a;
	char hex[20];
	printf("enter a hexadecimal number");
	scanf_s("%s", hex, 20);
	for (i = 0; hex[i] != '\0'; i++)
	{
		if (hex[i] <= 57)
		{
			a = hex[i] - 48;
			bin(a);
		}
		if ((hex[i] > 57) && (hex[i] <= 70))
		{
			switch (hex[i])
			{
			case 'A': a = 10;
				bin(a);
				break;
			case 'B': a = 11;
				bin(a);
				break; 
			case 'C': a = 12;
				bin(a);
				break;
			case 'D': a = 13;
				bin(a);
				break;
			case 'E': a = 14;
				bin(a);
				break;
			case 'F': a = 15;
				bin(a);
				break;
			default:
				break;
			}
		}
	}
	getch();
	return 0;
}
int bin(int x)
{
	int b=x,base = 1, sum = 0,rem;
	while (x > 0)
	{
	//	printf("x:%d\n", x);
		rem = x % 2;
		x = x / 2;
		sum = sum + rem*base;
		base = base * 10;
	}
	//printf("b:%d\n", b);
	if((b==0) || (b==1))
	    printf("000%d\n", sum);
	else if ((b == 2) || (b == 3))
		printf("00%d\n", sum);
	else if ((b >= 4) && (b <= 7))
		printf("0%d\n", sum);
	else
		printf("%d\n", sum);
}