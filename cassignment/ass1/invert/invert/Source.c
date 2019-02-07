#include<stdio.h>
int main()
{
	int n, arr[10],g, i=0, j,k,l,rem,p,b,m,temp;
	printf("enter a binary number");
	scanf_s("%d", &n);
	printf("enter the p bit");
	scanf_s("%d", &p);
	printf("enter b bits");
	scanf_s("%d", &b);
	while (n > 0)
	{
		rem = n % 10;
		arr[i] = rem;
		i++;
		n = n / 10;
	}
	for (k = 0, j = i - 1; k <i / 2; k++, j--)
	{
		temp = arr[j];
		arr[j] = arr[k];
		arr[k] = temp;
	}
	for (g= p; g< (p+b); g++)
	{   
		if (arr[g] == 0)
			arr[g] = 1;
		else
			arr[g] = 0;
	}
	for (m = 0; m < i; m++)
		printf("%d", arr[m]);
	getch();
	return 0;
}