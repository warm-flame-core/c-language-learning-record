#include "SepList.h"
void test()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);
	SLPushFront(&s1,8);
	SLPrint(&s1);
	SLPopBack(&s1);
	SLPrint(&s1);
	SLPopFront(&s1);
	SLPrint(&s1);
	SLDestroy(&s1);
}
int main()
{
	test();
	return 0;
}