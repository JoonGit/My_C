#include <stdio.h>

int main(void) {
	//int nInput;
	//scanf_s("%d", &nInput);
	//if (nInput <= -1) nInput = 1;
	//else if (nInput >= 10) nInput = 9;
	//int nIndex = 0;
	//while (nInput > nIndex)
	//{
	//	printf("*");
	//	nIndex++;
	//}
	//// 문제를 잘보자
	//putchar("\n");

	// 홀수 일때 별을 찍는다
	// (5, 1) (5, 2) (5, 3) (5, 4) (5, 5) 


	//int input;
	//scanf_s("%d", &input);

	//for (int i = 0; i < input; i++)
	//{
	//	for (int j = 0; j < input; j++)
	//	{
	//		if (i + j >= (input - 1))	printf("*\t");
	//		else						printf("\t");
	//		if (j >= input - i)			printf("*\t");						
	//	}
	//	printf("\n");
	//}

	//int sum = 0;
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 4 == 0) {
	//		sum += i;
	//		printf("%d\n", i);
	//	}
	//	
	//}
	//printf("%d", sum);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i + j >= (3 - 1))	printf("\t*\t");
			else						printf("\t");				
		}
		printf("\n");
	}
	
	/*for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*\t");
		}
		putchar('\n');
	}*/

	//int sum = 0;
	//for (int i = 0; i < input; i++)
	//{
	//	sum += i + 1;
	//}
	//printf("%d", sum);

	//if(input >= 2 && input <= 9)
	//	for (int i = 0; i < 1; i++)
	//	{
	//		for (int j = 1; j < 10; j++)
	//		{
	//			printf("%d * %d = %d\n", input, j, input * j);
	//		}
	//		putchar('\n');
	//	}
	//else
	//{
	//	printf("ERROR");
	//}

	return 0;

	/*int ninput = 0;
	scanf_s("%d", &ninput);

	int i = 1;
	while (i <= 9) {
		if (2 > ninput || ninput > 9) {
			printf("ERROR");
			break;
		}
		printf("%d * %d = %d\n", ninput, i, ninput * i);
		i++;
	}*/
}