#include <stdio.h>

int main(void) {
	int aList[5] = { 40, 20 ,50, 30, 10 };
	int nTotal = 0;

	int *pnData = aList;
	pnData = aList + 5;
	printf("%p", pnData);
	//while (pnData < aList + 5) {
	//	nTotal += *pnData;
	//	pnData++;
	//}
	return 0;
}