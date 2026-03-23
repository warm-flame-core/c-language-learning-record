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
	printf("**********3.查找联系人  4.删除联系人***********\n");
	printf("**********5.展示联系人  0.退出******************\n");
	printf("*********************************************\n");
	printf("*********************************************\n");
}
int main()
{
	menu();
	return 0;
}