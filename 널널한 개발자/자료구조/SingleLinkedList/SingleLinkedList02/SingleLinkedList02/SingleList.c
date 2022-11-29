#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct NODE{
	int nData;

	struct NODE* next;
}NODE;

NODE g_List = { 0 };

int IsEmpty() {
	if (g_List.next == NULL)
		return 1;
	return 0;
}
// 데이터 삽입
// head
void InsertAtHead(int inputData)
{
	NODE* newData = (NODE*)malloc(sizeof(NODE));
	newData->nData = inputData;

	if (IsEmpty())
		g_List.next = newData;
	else
	{
		newData->next = g_List.next;
		g_List.next = newData;
	}
}

// tail
void InsertAtTail(int inputData)
{
	NODE* pTmp = &g_List;
	while (pTmp->next != NULL)
	{
		pTmp = pTmp->next;
	}

	NODE* newData = (NODE*)malloc(sizeof(NODE));
	memset(newData, 0, sizeof(NODE));
	newData->nData = inputData;

	pTmp->next = newData;
}


// 데이터 확인
void PrintList() {
	NODE* pTmp = g_List.next;
	while (pTmp != NULL)
	{
		printf("nData : %d\n", pTmp->nData);
		pTmp = pTmp->next;
	}
	putchar('\n');
}

// 데이터 찾기
int FindData(int findData)
{
	NODE* pTmp = g_List.next;
	while (pTmp != NULL)
	{
		if (pTmp->nData == findData)
		{
			printf("Find Data : %d\n", pTmp->nData);
			return 1;
		}
		pTmp = pTmp->next;
	}
	return 0;
}

// 데이터 삭제
int DeleteData(int delData)
{
	NODE* pTmp = g_List.next;
	NODE* pPrev = &g_List;
	while (pTmp != NULL)
	{
		if (pTmp->nData == delData)
		{
			pPrev->next = pTmp->next;
			printf("삭제 데이터 : %d\n", pTmp->nData);
			free(pTmp);
			return 1;
		}
		pTmp = pTmp->next;
		pPrev = pPrev->next;
	}
	g_List.next = 0;
	return 0;
}

void ReleaseData()
{
	NODE* pTmp = g_List.next;
	while (pTmp != NULL)
	{
		NODE* pDelete = pTmp;
		pTmp = pTmp->next;
		printf("데이터 삭제 : %d\n", pDelete->nData);
		free(pDelete);
	}

}

int Pop(NODE* pPopData) {
	NODE* pTmp = g_List.next; // g_List 의 첫번째 데이터

	if (IsEmpty())
		return 0;

	memcpy_s(pPopData,sizeof(NODE), pTmp, sizeof(NODE)); // pPopData에 pTmp 복사

	g_List.next = pTmp->next;
	free(pTmp);
	return 1;	
}

//Rear
void Rear(int FrontData)
{
	InsertAtTail(FrontData);
}

//Front
int Front(NODE* pFrontData)
{
	NODE* pTmp = g_List.next;
	if (IsEmpty())
		return 0;

	memcpy_s(pFrontData, sizeof(NODE), pTmp, sizeof(NODE)); // pPopData에 pTmp 복사

	g_List.next = pTmp->next;
	free(pTmp);
	return 1;
}

int main() {
	
	//stack 구현
	InsertAtHead(1);
	InsertAtHead(2);
	InsertAtHead(3);
	//PrintList();
	NODE popData = { 0 };
	Pop(&popData);
	printf("%d\n", popData.nData);
	Pop(&popData);
	printf("%d\n", popData.nData);
	Pop(&popData);
	printf("%d\n", popData.nData);
	PrintList();

	//Queue 구현
	//Rear(1);
	//Rear(2);
	//Rear(3);
	//PrintList();
	//NODE FrontData = { 0 };

	//Front(&FrontData);
	//printf("%d\n", FrontData.nData);
	//Front(&FrontData);
	//printf("%d\n", FrontData.nData);
	//Front(&FrontData);
	//printf("%d\n", FrontData.nData);
	//PrintList();

	
	return 0;
}