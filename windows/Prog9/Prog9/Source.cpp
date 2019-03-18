#include<iostream>
#include<Windows.h>
using namespace std;
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
	cout<<"current process id:"<<GetCurrentProcessId()<<endl;
	cout<<"current thread id is:"<<GetCurrentThreadId()<<endl;
	cout<<"process id:"<< GetProcessId(pi.hProcess)<<endl;
	cout<<"Thread id:"<<GetThreadId(pi.hThread)<<endl;
	cout<<"Process Id of thread:"<<GetProcessIdOfThread(pi.hThread)<<endl;
	system("pause");
	return 0;

}