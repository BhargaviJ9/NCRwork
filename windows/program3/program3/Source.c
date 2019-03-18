#include<windows.h>
#include<stdio.h>
#include<tchar.h>
#include<shellapi.h>
void DumpEnvstrings(PTSTR pEnvBlock[]) {
	int current = 0;
	PTSTR *pElement = (PTSTR *)pEnvBlock;
	PTSTR pcurrent = NULL;
	while (pElement != NULL)
	{
		pcurrent = (PTSTR)(*pElement);
		if (pcurrent == NULL)
			pElement = NULL;
		else
		{
			_tprintf(TEXT("[%u]%ws\r\n"), current, pcurrent);
			current++;
			pElement++;
		}
	}
}
int _tmain(int argc, TCHAR *argv[], TCHAR *env[])
{
	DumpEnvstrings(env);
	TCHAR envVarString0[] = TEXT("%windir%");
	TCHAR buffer[MAX_PATH];
	DWORD ret;
	ret = ExpandEnvironmentStrings(envVarString0, buffer, MAX_PATH);
	if (!ret)
	{
		printf("%d\n", GetLastError());
		getchar();
		return FALSE;
	}
	else
		printf("%ws\n", buffer);
	getchar();
	return 0;
}