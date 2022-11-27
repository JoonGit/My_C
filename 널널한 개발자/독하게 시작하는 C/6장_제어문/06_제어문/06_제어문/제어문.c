#include <stdio.h>

int main(void) {
	//int nInput, nMax = 0;

	//scanf_s("%d", &nInput);
	//if (nInput > nMax) nMax = nInput;

	//scanf_s("%d", &nInput);
	//if (nInput > nMax) nMax = nInput;

	//scanf_s("%d", &nInput);
	//if (nInput > nMax) nMax = nInput;

	//printf("MAX : %d", nMax);

	//int nAge = 0;
	//int nPay = 1000;
	//int nDiscount = -250;

	//scanf_s("%d", &nAge);
	//
	//if (nAge <= 19) printf("나이 %d 최종요금 : %d", nAge, nPay + nDiscount);
	//else printf("나이 %d 최종요금 : %d", nAge, nPay);

	const int bus_pay = 1000;
	int pay;
	int age = 0;
	scanf_s("%d", &age);

	if (age <= 13) {
		pay = bus_pay * 0.5;
		if (age <= 3) 
			pay =  0;
	}
	else if (age >= 13) {
		pay = bus_pay * 0.75;
		if (age >= 60) pay = 0;
		else if (age >= 20) {
			pay = bus_pay;
		}
	}
	printf("나이 : %d\n", age);
	printf("금액 : %d\n", pay);
	
	return 0;
}