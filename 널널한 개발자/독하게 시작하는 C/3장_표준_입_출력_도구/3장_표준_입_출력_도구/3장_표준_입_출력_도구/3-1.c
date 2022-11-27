#include <stdio.h>

int main(void) {
	//int nAge = 0;
	//char szName[32] = { 0 };
	//printf("나이를 입력하세요. : ");
	//scanf_s("%d%*c", &nAge);	

	//printf("이름을 입력하세요. : ");	
	//fflush(stdin);
	//gets_s(szName, sizeof(szName));

	//printf("당신의 나이는 %d살이고 이름은 %s입니다.\n", nAge, szName);

	char szBuffer = 0;



	//첫번째 값을 szBuffer에 저장

	szBuffer = getchar();



	//두번째 값을 불러옴

	printf("%c\n", getchar());



	printf("%c\n", szBuffer);



	return 0;
}