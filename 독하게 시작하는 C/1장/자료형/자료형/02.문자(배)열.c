#include <stdio.h>

int main(void)
{
	char a = 'a';
	printf("%c\n", a); // 'a'
	printf("%d\n", a); // 65

	//char szbuffer[12] = { 'h', 'e', 'l' };
	char szbuffer[12] = { "hel"};
	puts(szbuffer);
	return 0;
}