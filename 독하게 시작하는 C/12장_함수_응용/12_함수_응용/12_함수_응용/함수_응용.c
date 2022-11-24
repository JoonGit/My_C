#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(int* nLeft, int* nRight);
char* GetName(void);
int Length(int* x, int size);
void MyStrcpy(int* szBufferSrc, int* szBufferDst);
int TestFunc(void);
int GetFactorial(int nParam);
void PutData(char* pszParam);

int main(int argc, char* argv[]) {
	//int a = 10, b = 20;
	//int c[5] = { 0 };
	//int d[5] = { 1 };
	//Swap(&c, &d);
	//int szName[32] = { 0 };
	//int len = Length(&szName, sizeof(szName));

	//char* pszName = NULL;
	//pszName = GetName();
	//printf("이름 : %s \n", pszName);

	//free(pszName);
	//printf("이름 : %s \n", pszName);

	//char szBufferSrc[12] = { "Testringkkkk" };
	//char szBufferDst[12] = { 0 };

	//MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	////puts(szBufferDst);
	//printf("이름 : %s \n", szBufferDst);

	//int i = 0, nFact = 1;
	//for (i = 5; i >= 1; i--)
	//	nFact *= i;

	//printf("5! == %d\n", nFact);

	//printf("5! == %d\n", GetFactorial(5));

	//PutData("TestData");
	//putchar('\n');

	//char szPath[128] = { "C:\\Program Files\\" };
	//char szBuffer[128] = { 0 };
	//printf("Input path: ");
	//gets(szBuffer);

	//strncat(szPath, szBuffer);
	//puts(szPath);

	char szPath[128] = { 0 };
	char szBuffer[128] = { 0 };

	printf("Input path: ");
	gets(szBuffer);

	snprintf(szPath, "C:\\Program Files\\%s", szBuffer);
	puts(szPath);


	return 0;
}



void Swap(int* nLeft, int* nRight) {
	int nTemp = *nLeft;
	*nLeft = *nRight;
	*nRight = nTemp;
}

char* GetName(void)
{
	char* pszName = NULL;
	pszName = (char*)calloc(32, sizeof(char));
	printf("이름을 입력하세요. : ");

	gets_s(pszName, sizeof(char) * 32);

	return pszName;
}

int Length(int* x, int size) {
	return size / sizeof(x[0]);
}
void MyStrcpy(char* szBufferDst, int size, char* szBufferSrc) {
	int nLenSrc = 0;

	nLenSrc = strlen(szBufferSrc);

	if (nLenSrc + 1 > size)
		return size - (nLenSrc + 1);

	for (int i = 0; i < size; i++)
	{
		if (szBufferSrc[i] == '\n')
			break;
		szBufferDst[i] = szBufferSrc[i];
	}
}
int TestFunc(void)
{
	static int nData = 10;
	++nData;
	return nData;
}

int GetFactorial(int nParam)
{
	int nResult = 0;
	if (nParam == 1) return 1;

	nResult = nParam * GetFactorial(nParam - 1);
	return nResult;
}

void PutData(char* pszParam)
{
	if (*pszParam == '\0')
		return;

	putchar(*pszParam);
	PutData(pszParam + 1);
}