#include <stdio.h>

int main1(void)
{
	123.0;		//double;
	123.0f;		//float;
	printf("%f\n", 123.45f);	//123.449997
	printf("%f\n", 123.45);		//123.450000
	printf("\n");
	printf("%f\n", 2147483648.0f);
	printf("%f\n", 2147483648.0f - 30);
	printf("%f\n", 2147483648.0f - 60);
	printf("%f\n", 2147483648.0f - 64);
	printf("%f\n", 2147483648.0f - 65); // 값이 워프 된다
	printf("\n");
	printf("%f\n", 2147483648.0);
	printf("%f\n", 2147483648.0 - 30);
	printf("%f\n", 2147483648.0 - 60);
	printf("%f\n", 2147483648.0 - 64);
	printf("%f\n", 2147483648.0 - 65);
	 //float는 값이 근사값 처리로 인해 문제가 많이 생김으로 double를 사용하는게 좋다
	return 0;
}