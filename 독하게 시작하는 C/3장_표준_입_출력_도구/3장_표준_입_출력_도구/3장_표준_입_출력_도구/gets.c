#include <stdio.h>

#include <conio.h>

int main2(void) {

	//char ch = 0;
	//char ch2 = 0;
	//ch2 = getchar();
	//printf("아무 키나 누르면 다음으로 넘어 갑니다. \n");

	//ch = _getch();
	//printf("입력한 키는 ");
	//putchar(ch);
	//printf("입니다. \n");

	//char szName[32] = { 0 };
	//printf("이름을 입력하세요 : ");
	//gets(szName);

	//printf("당신의 이름은 ");
	//puts(szName);
	//puts("입니다.");


	// 보안 결함이 있는 gets 는 사용하지 않는다
	//char szname[32] = { 0 };
	//printf("이름을 입력하세요 : ");
	//gets_s(szname, sizeof(szname));

	//printf("당신의 이름은 ");
	//puts(szname);
	//puts("입니다.");

	//int x = 10;

	//putchar('B');
	//putchar('\n');

	//printf("%c\n", 'A');
	//printf("x는 %d 입니다.\n", x);
	
	// 출력 형식에 따른 정보 인식
	//printf("%c\n", 'A');
	//printf("%c\n", 'A' + 1);
	//printf("%c\n", 'C');

	//printf("%d\n", 'A');
	//printf("%d\n", 'A' + 1);
	//printf("%d\n", 'C');

	//printf("%c\n", 65);
	//printf("%c\n", 65 + 1);
	//printf("%c\n", 67);

	//printf("\n");

	//printf("%d\n", 10);
	//printf("%u\n", 10);
	//printf("%d\n", 10U);
	//printf("%u\n", 10U);

	//printf("%d\n", 2147483647);
	//printf("%d\n", 2147483648);
	//printf("%d\n", 2147483649);


	//printf("%d\n", -1);
	//printf("%u\n", -1);

	//printf("%d\n", 1234);
	//printf("%d, %d\n", 1234, -5678);
	//printf("%+d, %+d\n", 1234, -5678);

	//printf("%8d\n", 1234);
	//printf("%08d\n", 1234);
	//printf("%-08d\n", 1234);

	int nAge = 0;
	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);
	printf("당신의 나이는 %d 입니다. \n", nAge);






	//char szName[12] = { "Hello" };
	//gets_s(szName, sizeof(szName));
	

	//// 버퍼 확인하기
	// 01 = '\n'
	//FILE* fp = stdin;
	//getchar();
	//getchar();
	//getchar();
	//getchar();

	// scanf_s
	//int nData = 0;
	//scanf_s("%d", &nData);
	
	//FILE* fp = stdin;
	//int nAge = 0;
	//printf("나이를 입력 하세요");
	//scanf_s("%d", &nAge);

	//fflush(stdin);

	//int szName[12] = {0};
	//printf("이름를 입력 하세요");
	//gets_s(szName, sizeof(szName));
	return 0;
}