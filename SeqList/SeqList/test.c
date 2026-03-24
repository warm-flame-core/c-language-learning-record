#define _CRT_SECURE_NO_WARNINGS 1
#include "SepList.h"
#include "Contact.h"
//void test()
//{
//	SL s1;
//	SLInit(&s1);
//	SLPushBack(&s1, 1);
//	SLPushBack(&s1, 2);
//	SLPushBack(&s1, 3);
//	SLPushBack(&s1, 4);
//	SLPrint(&s1);
//	SLPushFront(&s1,8);
//	SLPrint(&s1);
//	SLPopBack(&s1);
//	SLPrint(&s1);
//	SLPopFront(&s1);
//	SLPrint(&s1);
//	SLDestroy(&s1);
//}

//void test2()
//{
//	SL s1;
//	SLInit(&s1);
//	SLPushBack(&s1, 1);
//	SLPushBack(&s1, 2);
//	SLPushBack(&s1, 3);
//	SLPushBack(&s1, 4);
//	SLPrint(&s1);
//	SLInsert(&s1, 0, 99);
//	SLInsert(&s1, s1.size, 88);
//	SLPrint(&s1);
//}
//int main()
//{
//	test2();
//	return 0;
//}
void menu()
{
	printf("******************通讯录*********************\n");
	printf("**********1.添加联系人  2.删除联系人***********\n");
	printf("**********3.查找联系人  4.修改联系人***********\n");
	printf("**********5.展示联系人  0.退出******************\n");
	printf("*********************************************\n");
	printf("*********************************************\n");
}
int main()
{
	Contact con;
	ContactInit(&con);
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactFind(&con);
			break;
		case 4:
			ContactModify(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		default:
			printf("请重新选择");
			break;
		}
	} while (input);
	ContactDestroy(&con);
	return 0;
}