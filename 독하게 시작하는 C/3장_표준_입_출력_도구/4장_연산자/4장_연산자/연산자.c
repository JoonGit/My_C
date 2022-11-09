#include <stdio.h>

int main(void) {
	//int num1, num2;
	//printf("두 정수를 입력하세요.:");
	//scanf_s("%d %d", &num1, &num2);
	//double AVG = (num1 + num2) / 2;
	//printf("AVG : %.2lf", AVG);

	//// 시간 계산
	//int time;
	//scanf_s("%d", &time);
	//int h = time / 3600;
	//int m_ = time - (h * 3600);
	//int m = m_ / 60;
	//int s = m_ - (m * 60);
	//if (h < 10) {		
	//	if (m < 10) {			
	//		if (s < 10) {
	//			printf("%d초는 0%d시간 0%d분 0%d초 입니다", time, h, m, s);
	//			return;
	//		}
	//		printf("%d초는 0%d시간 0%d분 %d초 입니다", time, h, m, s);
	//		return;
	//	}
	//	printf("%d초는 0%d시간 %d분 %d초 입니다", time, h, m, s);
	//}
	//else if (m < 10) {
	//	if (s < 10) {
	//		printf("%d초는 %d시간 0%d분 %d초 입니다", time, h, m, s);
	//		return;
	//	}
	//	printf("%d초는 %d시간 0%d분 0%d초 입니다", time, h, m, s);
	//}
	//else if(s < 10) {
	//	printf("%d초는 %d시간 %d분 0%d초 입니다", time, h, m, s);
	//}
	//else {
	//	printf("%d초는 %d시간 %d분 %d초 입니다", time, h, m, s);
	//}

	int nInput, nTotal = 0;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	
	printf("Total : %d\n", nTotal);
 	return 0;
}