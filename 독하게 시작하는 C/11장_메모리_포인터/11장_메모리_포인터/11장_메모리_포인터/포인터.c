#include <stdio.h>
#include <stdlib.h>


int GetLength(char szBuffer[])
{
	char* pszData = szBuffer;
	int nLength = 0;
	while (*pszData != '\0')
	{
		pszData++;
		nLength++;
	}
	printf("문자의 길이 : %d", nLength);
	return nLength;
}

int main(void) {
	//int nData = 10;
	//printf("%s\n", "nData");

	//printf("%d\n", nData);
	//printf("%p\n", &nData);

	//int aList[5] = { 0 };

	//int *pnData = aList;
	//pnData[0] = 20;
	//pnData[1] = 10;
	//printf("aList[0] : %d\n", aList[0]);
	//printf("aList[1] : %d\n", aList[1]);

	//char szBUffer[16] = { "Hello_world" };
	//char *pszData = szBUffer;
	//int nLength = 0;

	//while (*pszData != '\0')
	//{
	//	pszData++;
	//	nLength++;
	//}
	//// strlen 문자열의 길이 출력
	//printf("Length : %d\n", nLength);
	//printf("Length : %d\n", strlen(szBUffer));
	//printf("Length : %d\n", strlen("World"));

	//char szBUffer[16] = { "TestString" };
	//char* pszData = "TestString";

	//printf("%d\n", memcmp(szBUffer, pszData, 10));
	//printf("%d\n", memcmp("teststring", pszData, 10));
	//printf("%d\n", memcmp("DataString", pszData, 10));

	char szBuffer[16] = { "Test Word" };
	GetLength(szBuffer);


	return 0;


}

