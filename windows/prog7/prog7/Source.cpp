#include<stdio.h>
int main(int argc, char *argv[])
{
	STARTUPINFO st;
	PROCESS_INFORMATION pi;
	ZeroMemory(&st, sizeof(st));
	BOOL x = CreateProcessA(NULL,
		argv[1],
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&st,
		&pi);
	if (x == true)
	{
		printf("process1 cretaed\n");
	}
	else
	{
		printf("\nnot cretated1 %d", GetLastError());
	}
	system("pause");
	return 0;

}