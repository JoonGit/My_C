#include <stdio.h>
#include <string.h>

//struct USERDATA
//{
//	int nAge;
//	char szName[32];
//	char szPhone[32];
//};

// struct 삭제 방법
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

typedef struct USER
{
	char szName[32];
	char szPhone[32];
	struct USER* pNext;
} USER;


USERDATA GetUserData(USERDATA* user)
{
	scanf_s("%d%*c", &user->nAge);
	gets_s(user->szName, sizeof(user->szName));
	gets_s(user->szPhone, sizeof(user->szPhone));
}

typedef union _IP_ADDR
{
	int				nAddress;
	short			asData[2];
	unsigned char	addr[4];
} IP_ADDR;


int main(void) {

	//struct USERDATA user;
	//user.nAge = 10;
	//strcpy_s(user.szName, sizeof(user.szName), "Hoon");
	//strcpy_s(user.szPhone, sizeof(user.szPhone), "010-1234-1234");

	//printf("%d, %s, %s \n", user.nAge, user.szName, user.szPhone);


	//USERDATA user ;
	//user.nAge = 10;
	//strcpy_s(user.szName, sizeof(user.szName), "Hoon");
	//strcpy_s(user.szPhone, sizeof(user.szPhone), "010-1234-1234");

	//printf("%d, %s, %s \n", user.nAge, user.szName, user.szPhone);

	//// 구조체 배열
	//USER userList[4] = {
	//	{"김어준", "1234", NULL},
	//	{"정봉주", "2345", NULL},
	//	{"주진우", "3456", NULL},
	//	{"김용민", "4567", NULL}
	//};
	//USER* pUser = NULL;

	//for (int i = 0; i < 4; i++)
	//{
	//	if (i == 3)
	//	{
	//		userList[i].pNext = NULL;
	//		break;
	//	}
	//	userList[i].pNext = &userList[i + 1];
	//}

	//pUser = &userList[0];
	//while (pUser != NULL)
	//{
	//	printf("%s, %s\n", pUser->szName, pUser->szPhone);

	//	pUser = pUser->pNext;
	//}
	
	IP_ADDR Data = { 0 };

	Data.asData[0] = 1578;
	Data.addr[2] = 12;
	Data.addr[3] = 34;


	//for (int i = 0; i < 4; i++)
	//{
	//	printf("%d\n", Data.asData[i]);
	//}
	printf("%d\n", Data);



	 
	return 0;
}