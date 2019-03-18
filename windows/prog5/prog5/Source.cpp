#include<Windows.h>
#include<iostream>
using namespace std;
int main()
{
	char buff[20];
	DWORD dword;
	int set = 20;
	HANDLE h;
	h = CreateFileA("text.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, NULL);
	if (h != INVALID_HANDLE_VALUE)
	{
		while(1) {
		if (FALSE == ReadFile(h, buff, set, &dword, NULL))

		{
			cout << "Couldn't Read File" << endl;

		}

		else if (dword == set)

		{

			buff[set] = '\0';

			cout << buff;

		}

		else if (dword == 0)

		{

			cout << endl << "END OF FILE" << endl;

			break;

		}

		else if (dword < set)

		{

			buff[dword] = '\0';

			cout << buff;

		}
	}
	}
	system("pause");
	return 0;
}