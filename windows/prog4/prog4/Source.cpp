#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <strsafe.h>
using namespace std;
int main(int argc, char *argv[])
{
	char buff[40];
	DWORD  dwBytesWritten;
//	DWORD dwBytesToWrite = (DWORD)strlen(buff);

	HANDLE hfile;
	hfile = CreateFile(argv[1],  // name of the write
		GENERIC_WRITE,          // open for writing
		0,                      // do not share

		NULL,                   // default security
		CREATE_ALWAYS,             // create new file only
		FILE_ATTRIBUTE_NORMAL,  // normal file
		NULL);                  // no attr. template
	if (hfile != INVALID_HANDLE_VALUE)
	{
		printf("The source file is %s\n", argv[1]);
		printf("enter the data");
		cin >> buff;
		int flag = WriteFile(hfile, buff, strlen(buff), &dwBytesWritten, NULL);
		if (flag == 0)
		{

			cout << "Failed to Write to File" << GetLastError() << endl;

		}

		else if (dwBytesWritten != strlen(buff))

		{

			printf("Written %ld bytes to the file", dwBytesWritten);

		}

		else

		{

			cout << endl << "Successful" << endl;

		}
	}
	else
		printf("invalid");
	system("pause");
	return 0;
}
