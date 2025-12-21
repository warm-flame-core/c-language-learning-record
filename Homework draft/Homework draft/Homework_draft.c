#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		sum = sum + arr[i];
//	}
//	float a = 0;
//	a = (float)sum / 10;
//	printf("%lf", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int A[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int B[10] = { 2,3,4,5,6,7,8,9,10,11 };
//	for (int i = 0;i < 10;i++)
//	{
//		int temp = 0;
//		temp = B[i];
//		B[i] = A[i];
//		A[i] = temp;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", A[i]);
//	}
//	printf("\n");
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", B[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key) {
//
//    while (left <= right) {
//
//        int mid = left + (right - left) / 2;
//
//        if (arr[mid] == key) 
//        {    
//            return mid;
//        }
//        else if (arr[mid] < key) 
//        {
//            left = mid + 1;
//        }
//        else 
//        {
//            right = mid - 1;
//        }
//    }
//    return -1;
//}
//int main()
//{
//	int key = 0;
//	scanf("%d", &key);
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr_len = sizeof(arr) / sizeof(arr[0]);
//	int r=bin_search(arr, 0, arr_len - 1, key);
//    printf("%d\n", r);
//	return 0;
//}
//#include<stdio.h>
//int is_prime(int i)
//{
//	int a = 2;
//	for (a;a < i - 1;a++)
//	{
//		if (i % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int i = 100;i <= 200;i++)
//	{
//		
//		int j = is_prime(i);
//		if (j == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", i);
	}
}
void reverse(int arr[], int sz)
{
	int a = sz - 1;
	for (a;a >= 0;a--)
	{
		printf("%d ", arr[a]);
	}
}
int main()
{
	int arr[1000] = { 1,2,4,3,7,4,2,4,3,6,3,5,6,7,4,6,7,4,3,2,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	print(arr, sz);
	reverse(arr, sz);
	return 0;
}