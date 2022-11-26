#include <stdio.h>


void PrintString(char* pszParam);
void PrintString2(char* pszParam);

int main(void)
{
	//char szBuffer[32] = { "I am a boy" };
	//char szBuffer2[32] = { "You are a girl." };

	//PrintString(szBuffer);
	//PrintString("You are a girl.");
	//PrintString(szBuffer);
	//printf("\n");
	//PrintString2(szBuffer);
	//PrintString2(szBuffer2);
	//PrintString2(szBuffer);

	int nData = 10;
	const int* pnData = &nData;
	int* const pnNewData = &nData;

	printf("pnData : %d \npnNewData : %d \n", pnData, pnNewData);
	nData = 20;
	nData = NULL;
	return 0;
}

void PrintString(const char* pszParam)
{
	//pszParam[0] = 'y'; 변경 불가
	puts(pszParam);
}

void PrintString2(char* pszParam)
{
	pszParam[0] = 'y'; // 값 변경 가능
	puts(pszParam);
}