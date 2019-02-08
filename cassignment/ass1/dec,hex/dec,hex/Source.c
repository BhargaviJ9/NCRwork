#include<stdio.h>
int itoh(int);
int main()
{
	int n;
	printf("enter n");
	scanf_s("%d",&n);
	itoh(n);
	getch();
	return 0;
}
int itoh(int a)
{
	int b = 0, rem, j, i = 0;
	int arr[10];
	while (a > 0)
	{
		rem = a % 16;
		if (rem <=9)
		{
			arr[i] = 48 + rem;
			i++;
		}
		else {
			arr[i] = 55 + rem;
			i++;
		}
		a = a / 16;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%c", arr[j]);
	return 0;
}