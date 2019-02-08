#include<stdio.h>
int main()
{
	int m,n, a[7], i, j = 0;
	printf("Enter n:");
	scanf_s("%d", &n);
	m = n;
	if ((n >= 16) && (n < 32))
	{
		while (n>0)
		{
			a[j] = n % 2;
			n = n / 2;
			j++;
		}
	}
	if (m >= 16)
		for (i = j-1; i>=0; i--)
			printf("%d", a[i]);
	else
		printf("not possible");
	system("pause");
	return 0;
}
