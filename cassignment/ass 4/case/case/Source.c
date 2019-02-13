#include<stdio.h>
int main()
{
	char str[25];
	char *p;
	printf("enter a string");
	scanf_s("%s", str,25);
	for (p = str; *p != '\0'; p++)
	{
		*p = *p - 32;
		printf("%c", *p);
	}
	getch();
	return 0;
}
