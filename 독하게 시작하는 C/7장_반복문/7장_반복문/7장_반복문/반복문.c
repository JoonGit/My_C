#include <stdio.h>

int main(void) {
	int ninput = 0;
	scanf_s("%d", &ninput);

	int i = 1;
	while (i <= 9) {
		if (2 > ninput || ninput > 9) {
			printf("ERROR");
			break;
		}
		printf("%d * %d = %d\n", ninput, i, ninput * i);
		i++;
	}
}