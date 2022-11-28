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

NODE* Pop() {
	NODE* pTmp = g_List.next; // g_List 의 첫번째 데이터
	NODE* pDelete = pTmp; // 삭제용 데이터
	pTmp = pTmp->next;
	printf("담겨진 데이터 : %d\n", pTmp->nData);
	printf("데이터 삭제 : %d\n", pDelete->nData);
	free(pDelete);
	return pTmp;
	
}
int main() {
	
	InsertAtHead(1);
	InsertAtHead(2);
	InsertAtHead(3);
	//PrintList();
	NODE* popData1 = Pop();
	NODE* popData2 = Pop();
	NODE* popData3 = Pop();

	
	return 0;
}