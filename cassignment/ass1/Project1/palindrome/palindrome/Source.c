#include<stdio.h>
#include<string.h>
int main()
{
	int i, j,count=0;
	char str[20];
    printf("enter a string\n");
	scanf_s("%s", str,20);
   for (i = 0, j =( strlen(str)-1);i<=(strlen(str)/2);i++, j--)
	{
		if (str[i] == str[j])
			count = count+1;
	}
	printf("%d,%d", i, count);
	if (count == i)
		printf("palindrome");
	else
		printf("not");
	getch();
	return 0;
}