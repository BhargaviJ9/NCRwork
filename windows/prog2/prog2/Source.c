#include<stdio.h>
#include<Windows.h>
int main()
{
	LPWSTR *sptr;
	int args;
	sptr = CommandLineToArgvW(GetCommandLineW(), &args);
	if (sptr == NULL)
		printf("nothing found");
	else
		for (int i = 1; i < args; i++)
			printf("%d : %ws", i, sptr[i]);
	system("pause");
	return 0;
}