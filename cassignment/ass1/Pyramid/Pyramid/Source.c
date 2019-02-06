#include<stdio.h>
int main()
{
	int r, i, j, space = 0, k, temp;
	printf("enter rows\n");
	scanf_s("%d", &r);
	temp = r;
	for (i = 1; i <= r; i++)
	{
		for (space = 0; space<temp; space++)
			printf("  ");
		temp--;
		for (j = i; j>0; j--)
			printf("%d ", j);
		if (i>1)
		{
			for (k = 2; k <= i; k++)
				printf("%d ", k);
		}
		printf("\n");
		system("pause");
	}
	return 0;
}