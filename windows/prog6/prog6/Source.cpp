#include<Windows.h>
#include<iostream>
int main(int argc, char *argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	STARTUPINFO si1;
	PROCESS_INFORMATION pi1;
	ZeroMemory(&si1, sizeof(si1));
	BOOL x = CreateProcessA(
		NULL, argv[1],
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&si,
		&pi);
	BOOL x1 = CreateProcessA(
		NULL, argv[2],
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&si1,
		&pi1);
	if (x == true)
	{
		printf("process1 cretaed\n");
	}
	else
	{
		printf("\nnot cretated1 %d", GetLastError());
	}
	if (x1 == true)
	{
		printf("process2 cretaed\n");
	}
	else
	{
		printf("\nnot cretated2 %d", GetLastError());
	}
	system("pause");
	return 0;
}