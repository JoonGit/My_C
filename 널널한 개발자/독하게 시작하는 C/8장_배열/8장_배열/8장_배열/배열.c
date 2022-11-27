#include <stdio.h>

int main(void) {
	/*int aList[5] = { 30, 40, 10, 50, 20 };

	for (int i = 1; i < 5; i++)
	{
		if (aList[0] < aList[i]) aList[0] = aList[i];
	}

	for (int i = 0; i < 5; i++)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MAX: %d\n", aList[0]);*/


	//int aList[5] = { 30, 40, 10, 50, 20 };
	//int nTmp = 0;
	//int len = sizeof(aList) / sizeof(aList[0]);
	//printf("%d", len);
	//for (int i = 1; i < len; i++)
	//{
	//	if (aList[0] > aList[i]) {
	//		aList[0] = aList[0] ^ aList[i];
	//		aList[i] = aList[0] ^ aList[i];
	//		aList[0] = aList[0] ^ aList[i];
	//	}
	//}

	//for (int i = 0; i < len; i++)
	//	printf("%d\t", aList[i]);
	//putchar('\n');

	//printf("MIN: %d\n", aList[0]);

	/*int alist[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			alist[i][3] += alist[i][j];
		}
		putchar('\n');
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			alist[2][j] += alist[i][j];
			printf("%d\n", alist[i][j]);
		}
		putchar('\n');
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", alist[i][j]);
		}
		putchar('\n');
	}*/

	int aList[5] = { 30, 40, 10, 50, 20 };
	int len = sizeof(aList) / sizeof(aList[0]);

	for (int i = 1; i < len; i++)
	{
		if (aList[0] < aList[i]) aList[0] = aList[i];
		if (aList[len - 1] > aList[i]) {
					aList[len - 1] = aList[len - 1] ^ aList[i];
					aList[i] = aList[len - 1] ^ aList[i];
					aList[len - 1] = aList[len - 1] ^ aList[i];
				}
	}
	printf("Min : %d, Max : %d", aList[0], aList[len - 1]);
	return 0;
}