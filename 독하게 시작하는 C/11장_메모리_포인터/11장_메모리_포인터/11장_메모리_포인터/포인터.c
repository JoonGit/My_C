#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//char name[12] = { "¿Ã¿Á¡ÿ" };
	//char *pNname = name;
	//printf("%s", pNname);

	char *pList = NULL;

	pList = malloc(sizeof(char) * 12);

	pList[0] = 'A';
	pList[2] = 'B';
	pList[3] = 'C';

	return 0;
}