#include<stdio.h>
int rev(char *);
int main()
{
	char str[20];
	printf("enter a string");
	scanf_s("%s", str,20);
	rev(str);
	getch();
	return 0;
}
int rev(char *a)
{
	if (*a)
	{
		rev(a + 1);
		printf("%c", *a);
	}
}