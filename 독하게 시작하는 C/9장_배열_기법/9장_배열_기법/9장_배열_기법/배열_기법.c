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
	//int alist[5] = { 30, 40, 10, 50 ,20 };
	//int nminindex = 0;

	//for (int i = 0; i < 4; i++)
	//{
	//	nminindex = i;
	//	for (int j = i + 1; j < 5; j++)
	//	{			
	//		if (alist[nminindex] > alist[j])	nminindex = j;
	//	}
	//	if (i == nminindex)
	//		continue;
	//	alist[i] =			alist[i] ^ alist[nminindex];
	//	alist[nminindex] =	alist[i] ^ alist[nminindex];
	//	alist[i] =			alist[i] ^ alist[nminindex];
	//}

	//for (int i = 0; i < 5; i++)
	//	printf("%d\t", alist[i]);
	//putchar('\n');

	/*int alist[5][5] = { 0 };
	int num = 1;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++)
			{
				alist[i][j] = num;
				num++;
			}			
		}
		else {
			for (int j = 4; j >= 0; j--)
			{
				alist[i][j] = num;
				num++;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", alist[i][j]);
		}
		putchar('\n');
	}*/

	int aList[5][5] = { 0 };
	int num = 1;

	for (int i = 0; i < 5; i++)
	{
		if (i == 0) {
			for (int j = 0; j < 5; j++)
			{
				aList[i][j] = num;
				num++;
			}
		}
		else if (i == 1) {
			for (int j = 1; j < 5; j++)
			{
				aList[j][i + 3] = num;
				num++;
			}
		}
		else if (i == 2) {
			for (int j = 3; j >= 0; j--)
			{
				aList[i + 2][j] = num;
				num++;
			}
		}
		
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}



	return 0;
}