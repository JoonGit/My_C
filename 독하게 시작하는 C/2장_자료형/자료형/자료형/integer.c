#include <stdio.h>

int main(void) {

	char ch = 'A';
	wchar_t wch = L'A';
	short sData = 10;
	long lData = 10L;
	long int lnData = 10L;
	long long int llnData = 10LL;

	unsigned char byNewData = 0;
	unsigned short sNewData = 65535U;
	unsigned int uNewData = 1U;
	unsigned long int ulNewData = 1UL;
	unsigned long long int ullNewdata = 1ULL;

	char ch1 = 'A', ch2 = 'B', ch3 = 'C';
	char szData[4] = { 'A', 'B', 'C' };
	char szNewData[4] = { "ABC" };
	return 0;
}