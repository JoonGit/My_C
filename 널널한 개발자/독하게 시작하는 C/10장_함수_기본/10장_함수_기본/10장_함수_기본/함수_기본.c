#include <stdio.h>

int GetData();
int GetMax(int aList[]);

int main(void) {
	int aList[3] = { 0 };
	int nMax = -9999;

	for (int i = 0; i < 3; i++)
	{
		aList[i] = GetData();
		
	}
	nMax = GetMax(aList);

	printf("%d, %d, %d 중 가장큰 수는 %d 입니다.\n",
		aList[0], aList[1], aList[2], nMax);

	return 0;
}

int GetData() {
	int num = 0;
	printf("정수를 입력하세요. : ");
	scanf_s("%d", &num);
	return num;
}

int GetMax(int aList[]) {
	int nMax = 0;
	int len = sizeof(aList) / sizeof(aList[0]);
	for (int i = 0; i < len; i++)
	{
		if (aList[i] > nMax)
			nMax = aList[i];
	}
	return nMax;
}