#include <stdio.h>

int main(void) {

	//// 오른차순 정렬, 중첩 for문
	//int aList[5] = { 30, 40, 10, 50 ,20 };
	//int nTmp = aList[0];
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = i + 1; j < 5; j++)
	//	{
	//		if (aList[i] > aList[j])
	//		{
	//			aList[i] = aList[i] ^ aList[j];
	//			aList[j] = aList[i] ^ aList[j];
	//			aList[i] = aList[i] ^ aList[j];
	//		}
	//	}
	//	
	//}

	//// 버블 정렬
	//int aList[5] = { 30, 40, 10, 50 ,20 };
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		if (aList[j] > aList[j + 1])
	//		{
	//			aList[j] = aList[j] ^ aList[j + 1];
	//			aList[j + 1] = aList[j] ^ aList[j + 1];
	//			aList[j] = aList[j] ^ aList[j + 1];
	//		}
	//	}

	//}
	int aList[5] = { 30, 40, 10, 50 ,20 };
	int nMinIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		nMinIndex = i;
		for (int j = i + 1; j < 5; j++)
		{			
			if (aList[nMinIndex] > aList[j])	nMinIndex = j;
		}
		if (i == nMinIndex)
			continue;
		aList[i] =			aList[i] ^ aList[nMinIndex];
		aList[nMinIndex] =	aList[i] ^ aList[nMinIndex];
		aList[i] =			aList[i] ^ aList[nMinIndex];
	}

	for (int i = 0; i < 5; i++)
		printf("%d\t", aList[i]);
	putchar('\n');

	return 0;
}