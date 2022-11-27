#include <stdio.h>

#define ADD(a, b) (a + b)

int Add(int a, int b)
{
	return a + b;
}

#define STRING(a) #a

#define PASTER(a, b) a##b

int main(void)
{
//	printf("%d\n", Add(3, 4));
//
//	printf("%d\n", ADD(3, 4));
	
	int nData = 10;

	printf("%d\n", PASTER(nDa, ta));
	printf("%d\n", nData);

	printf("%s\n", STRING(nData));


	
	
	return 0;
}