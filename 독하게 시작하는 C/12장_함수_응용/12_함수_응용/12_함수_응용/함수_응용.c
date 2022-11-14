#include <stdio.h>

void Swap(int *nLeft, int *nRight) {
	int nTemp = *nLeft;
	*nLeft = *nRight;
	*nRight = nTemp;
}
int main(void) {
	int a = 10, b = 20;
	Swap(&a, &b);
	printf("%d, %d\n", a, b);
	return 0;
}