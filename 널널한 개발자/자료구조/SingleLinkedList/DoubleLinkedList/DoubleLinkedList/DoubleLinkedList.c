#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct NODE
{
    int nData;
    struct NODE* prev;
    struct NODE* next;
}NODE;

NODE* g_pHead;
NODE* g_pTail;
int g_nSize;

void InitLIst(void)
{
    g_pHead = (NODE*)malloc(sizeof(NODE));
    g_pTail = (NODE*)malloc(sizeof(NODE));
    g_nSize = 0;

    memset(g_pHead, 0, sizeof(NODE));
    memset(g_pTail, 0, sizeof(NODE));

    g_pHead->next = g_pTail;
    g_pTail->prev = g_pHead;
    printf("(초기화) g_pHead : %p g_pTail : %p\n", g_pHead, g_pTail);
    putchar('\n');
}

void ReleaseList()
{
    NODE* pTmp = g_pHead;
    while (pTmp != NULL)
    {
        NODE* pDelete = pTmp;
        pTmp = pTmp->next;
        printf("데이터 삭제 %p, %d\n", pDelete, pDelete->nData);
        // if(g_pTail->next = g_pHead)
        //     break;
        free(pDelete);
    }
    InitLIst();
    putchar('\n');
}

void PrintList()
{
    printf("PrintList()\n");
    printf("g_pHead : %p, g_pTail : %p, g_nsize : %d\n", g_pHead, g_pTail, g_nSize);

    NODE* pTmp = g_pHead;
    while (pTmp != NULL)
    {
        printf("데이터 %p, %d\n다음데이터 : %p\n", pTmp, pTmp->nData, pTmp->next);
        pTmp = pTmp->next;
    }
    putchar('\n');
}

int InsertAtHead(const int inputData)
{
    NODE* pNewNode = (NODE*)malloc(sizeof(NODE));
    memset(pNewNode, 0, sizeof(NODE));
    pNewNode->nData = inputData;

    NODE* pHeadTmp = g_pHead;

    pNewNode->next = pHeadTmp->next;
    pNewNode->prev = pHeadTmp;
    pHeadTmp->next = pNewNode;
    pNewNode->next->prev = pNewNode;

    return g_nSize++;
}

int InsertAtTail(const int inputData)
{
    NODE* pNewNode = (NODE*)malloc(sizeof(NODE));
    memset(pNewNode, 0, sizeof(NODE));
    pNewNode->nData = inputData;

    NODE* pTailTmp = g_pTail;

    pNewNode->next = pTailTmp;
    pNewNode->prev = pTailTmp->prev;
    pTailTmp->prev = pNewNode;
    pNewNode->prev->next = pNewNode;

    return g_nSize++;
}

NODE* FindNode(const int fData)
{
    NODE* pTmp = g_pHead->next;
    while (pTmp != g_pTail)
    {
        if (pTmp->nData == fData)
        {
            printf("찾은 주소 : %p\n", pTmp);
            return pTmp;
        }
        pTmp = pTmp->next;
    }
    return 0;
}

int DeleteNode(const int fData)
{
    NODE* pNode = FindNode(fData);
    printf("반환 데이터 주소 : %p\n", pNode);

    pNode->prev->next = pNode->next;
    pNode->next->prev = pNode->prev;
    printf("삭제 데이터 : %d\n", pNode->nData);

    free(pNode);
    g_nSize--;

    putchar('\n');
    return 0;
}

int GetLength()
{
    return g_nSize;
}
int GetSize()
{
    return g_nSize;
}

int InsertAt(int idx, int inputData)
{
    if (idx > g_nSize)
        return -1;
    NODE* pTmp = g_pHead;
    for (int i = 0; i < idx; i++)
    {
        pTmp = pTmp->next;
    }

    // 새로운 데이터 생성
    NODE* pNewNode = (NODE*)malloc(sizeof(NODE));
    memset(pNewNode, 0, sizeof(NODE));
    pNewNode->nData = inputData;

    // 순서
    NODE* pHeadTmp = pTmp;

    pNewNode->next = pHeadTmp->next;
    pNewNode->prev = pHeadTmp;
    pHeadTmp->next = pNewNode;
    pNewNode->next->prev = pNewNode;
    return pTmp->nData;
}

NODE* GetAt(int idx)
{
    if (idx > g_nSize)
        return NULL;
    NODE* pTmp = g_pHead;
    for (int i = 0; i < idx; i++)
    {
        pTmp = pTmp->next;
    }

    NODE* pNode = (NODE*)malloc(sizeof(NODE));
    memcpy_s(pNode, sizeof(NODE), pTmp, sizeof(NODE));
    printf("찾은 데이터 주소 : %p\n", pTmp);

    pTmp->prev->next = pTmp->next;
    pTmp->next->prev = pNode->prev;
    printf("삭제 데이터 : %d\n", pNode->nData);

    free(pTmp);
    g_nSize--;
    putchar('\n');

    return pNode;
}
int main(void) {

    InitLIst();
    InsertAtTail(1);
    InsertAtTail(2);
    InsertAtTail(3);
    PrintList();

    InsertAt(2, 5);
    PrintList();
    NODE* FindNode = GetAt(1);
    printf("FindNode Data = %d", FindNode->nData);
    // ReleaseList();

    return 0;
}