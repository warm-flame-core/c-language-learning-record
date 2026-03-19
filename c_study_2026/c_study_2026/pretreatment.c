#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//#define MY_OFSETOF(type_struct, type_list) \
//					(int)&((type_struct*)0)->type_list					\
//
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S s1 = { "张三",20 };
//	printf("%d\n", MY_OFSETOF(struct S, age));
//	return 0;
//}


//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
#define SWAP_ODD_EVEN_BITS(n) \
    ((((n) & 0xAAAAAAAA) >> 1) | (((n) & 0x55555555) << 1))

// 测试代码
int main()
{
    int num = 0b1010; // 二进制 1010（十进制10）
    int res = SWAP_ODD_EVEN_BITS(num);

    printf("%d", res);
    return 0;
}