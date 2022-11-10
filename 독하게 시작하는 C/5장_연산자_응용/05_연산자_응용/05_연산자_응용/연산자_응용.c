#include <stdio.h>

int main(void) {
	int k = 0;
	scanf_s("%d", &k);
	printf("%s", k > 150 ? ("합격") : ("불합격"));

	return 0;
}