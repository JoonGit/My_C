#include <stdio.h>

typedef struct NODE
{
	int nData;

	struct NODE* next;
}NODE;

int main(void)
{
	NODE node[5] = {0};

	node[0].next = &node[1];
	node[1].next = &node[2];
	node[2].next = &node[3];
	node[3].next = &node[4];
	node[4].next = NULL;

	node[0].nData = 100;
	node[1].nData = 200;
	node[2].nData = 300;
	node[3].nData = 400;
	node[4].nData = 500;

	for (int i = 0; i < 5; i++)
	{
		printf("%p %d\n", &node[i], node[i].nData);
	}
	putchar('\n');
	NODE *pTmp = &node[0];
	while (pTmp != NULL)
	{
		printf("%p %d\n",pTmp, pTmp->nData);
		pTmp = pTmp->next;
		
	}
	return 0;
}