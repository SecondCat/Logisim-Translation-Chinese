/*
 *This is Logisim.jar Launcher
 *Time: 7/13/2022
 *@Bilibili.com User: uid = 180683488 https://space.bilibili.com/180683488
 */

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "windows.h"

void runJar(char *prarm);

int main(int argc, char *argv[])
{
	char *parameter = (char *)malloc(4096 * sizeof(char));
	strcpy(parameter, "-jar Logisim.jar ");

	if (argc == 2) // open parameter
	{
		strcat(parameter, argv[1]);
	}

	runJar(parameter);
	free(parameter);
	return 0;
}

void runJar(char *prarm)
{
	HWND hwnd = NULL;
	LPCTSTR lpOperation = "open";
	LPCTSTR lpFile = "JRE\\bin\\javaw.exe";
	LPCTSTR lpParameters = prarm;
	LPCTSTR lpDirectory = NULL;
	INT nShowCmd = SW_SHOW;
	ShellExecute(hwnd, lpOperation, lpFile, lpParameters, lpDirectory, nShowCmd);
}