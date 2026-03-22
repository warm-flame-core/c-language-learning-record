#include "SepList.h"
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

void test2()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);
	SLInsert(&s1, 0, 99);
	SLInsert(&s1, s1.size, 88);
	SLPrint(&s1);
}
int main()
{
	test2();
	return 0;
}