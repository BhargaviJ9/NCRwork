#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i = 0;
	int p;
	int count = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &p);
	i = n;

	//

	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	n = i;
	printf("%d", count);
	printf("\n");
	int m;
	for (int j = 0; j < p; j++)
	{
		m = n % ((int)pow(10, (count - 1)));
	m = m*(pow(10, (count - (count - 1))));

		m = m + (n / pow(10, (count - 1)));
		n = m;
	}
	printf("%d", n);
	getch();
	return 0;
}