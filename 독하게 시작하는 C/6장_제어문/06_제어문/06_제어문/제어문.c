#include <stdio.h>

int main(void) {
	const int bus_pay = 1000;
	int pay;
	int age = 0;
	scanf_s("%d", &age);

	if (age <= 13) {
		pay = bus_pay * 0.50;
		if (age <= 3) 
			pay = bus_pay * 0;
	}
	else if (age >= 13) {
		pay = bus_pay * 0.75;
			if (age >= 20)
			pay = bus_pay * 1;		
	}
	printf("나이 : %d\n", age);
	printf("금액 : %d\n", pay);
	
	return 0;
}