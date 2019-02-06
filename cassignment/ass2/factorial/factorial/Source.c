#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fact(n - 1);
}
int main()
{
	int num;
	int k;
	scanf_s("\n%d", &num);
	printf("\nfactorial=%d", fact(num));
	scanf_s("%d",&k);
	return 0;
}