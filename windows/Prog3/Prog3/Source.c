#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
void Envstrings(PTSTR EBlock[]) {
	int c = 0;
	PTSTR *Ele = (PTSTR *)EBlock;
	PTSTR *curr = NULL;
	while (Ele!= NULL)
	{
		curr = (PTSTR)(*Ele);
		if (curr == NULL)
			Ele= NULL;
		else
		{
			_tprintf(TEXT("[%u] %ws \r\n"), c, curr);
			c++;
			Ele++;
		}
	}
}
int _tmain(int argc, TCHAR *argv[], TCHAR *env[])
{
//	Envstrings(env);
	TCHAR envVarString0[] = TEXT("%windir%");
	TCHAR buffer[MAX_PATH];
	DWORD ret;
	Envstrings(env);
	ret = ExpandEnvironmentStrings(envVarString0, buffer, MAX_PATH);
	if (!ret)
	{
		printf("%d\n", GetLastError());
		getchar();
		return FALSE;
	}
	else
		printf("%ws\n", buffer);
	system("pause");
	return 0;
}