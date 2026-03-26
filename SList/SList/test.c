#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//void test1()
//{
//	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
//	node1->data = 1;
//	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
//	node2->data = 2;
//	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
//	node3->data = 3;
//	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
//	node4->data = 4;
//
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = NULL;
//	SLTNode* plist = node1;
//	SLTPrint(plist);
//}

void test2()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPrint(plist);
	SLTPushBack(&plist, 2);
	SLTPrint(plist);
	SLTPushBack(&plist, 3);
	SLTPrint(plist);
	SLTPushBack(&plist, 4);
	SLTPrint(plist);
	SLTPushFront(&plist, 6);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
}
int main()
{
	test2();
	return 0;
}