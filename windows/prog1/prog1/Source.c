#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *b = "bhargavi";
	WCHAR *j = L"jagarapu";
	char *mb = NULL;
	WCHAR *wc = NULL;
	int x = strlen(b);
	int y = wcslen(j);
	int u = IsTextUnicode(b, sizeof(char)*x, NULL);
	int u1 = IsTextUnicode(j, sizeof(WCHAR)*y, NULL);
	if (u == 1)
	{
		printf("It is unicode");
	}
	else
		printf("it is not unicode");
	if (u1 == 1)
	{
		printf("It is unicode");
	}
	else
		printf("it is not unicode");

		/*int l = MultiByteToWideChar(CP_UTF8,0, b, -1, wc, 0);
		//printf("\n %d\n", x);
		wc = (WCHAR *)malloc(sizeof(WCHAR)*l);
		int k = MultiByteToWideChar(CP_UTF8, 0, b, -1, wc, l);
		*/
	wc = (WCHAR *)malloc(sizeof(WCHAR)*(x+1));
	int k = MultiByteToWideChar(CP_UTF8, 0, b, -1, wc, (x+1));
		if (k == 0)
			printf("it cannot be converted : %d \n", GetLastError());
		else
			printf("can be converted : %S \n", wc);
		int s= WideCharToMultiByte(CP_UTF8, 0, j, -1,mb,0,NULL,NULL);
		mb = (char*)malloc(sizeof(char)*y);
		int s1 = WideCharToMultiByte(CP_UTF8, 0, j, -1, mb, s, NULL, NULL);
		if (s1 == 0)
			printf("cannot be converted.error(%d)", GetLastError());
		else
			printf("can be converted %s\n", mb);

		system("pause");
		return 0;
}