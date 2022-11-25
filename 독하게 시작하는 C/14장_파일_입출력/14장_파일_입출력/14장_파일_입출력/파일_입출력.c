#include <stdio.h>

int main(void)
{
	//FILE* fp = NULL;

	//fopen_s(&fp, "Test.txt", "w");

	//if (fp == NULL)
	//{
	//	puts("Error: FaLLed to open File!");
	//	return;
	//}

	//fclose(fp);

	int nData = 0;
	char szBuffer[128] = { 0 };
	FILE* fp = NULL;
	fopen_s(&fp, "fscanfTest.txt", "w");
	fprintf_s(fp, "%d,%s\n", 20, "Test");
	fclose(fp);

	fopen_s(&fp, "fscanfTest.txt", "r");
	fscanf_s(fp, "%d %s",  &nData, szBuffer, sizeof(szBuffer));

	fclose(fp);

	printf("%d, %s\n", nData, szBuffer);

	return 0;
}