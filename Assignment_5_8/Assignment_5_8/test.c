#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	int ret = a ^ b;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int tmp = ret & 1;
//		if (tmp)
//		{
//			count++;
//		}
//		ret >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}




//-----------------------------------------------
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
// 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret1 = n;
//	printf("奇数位:");
//	for (i = 0; i < 32 / 2; i++)
//	{
//		int tmp1 = ret1 & 1;
//		printf("%d ", tmp1);
//		ret1 >>= 2;
//	}
//	printf("\n");
//	int ret2 = n >> 1;
//	printf("偶数位:");
//	for (i = 0; i < 32 / 2; i++)
//	{
//		int tmp2 = ret2 & 1;
//		printf("%d ", tmp2);
//		ret2 >>= 2;
//	}
//	printf("\n");
//	return 0;
//}




//-----------------------------------------------
//写一个函数返回参数二进制中 1 的个数
// 
//int Count_Binary_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int tmp = n & 1;
//		if (tmp)
//		{
//			count++;
//		}
//		n >>= 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Count_Binary_1(n);
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//交换两个变量（不创建临时变量）

int main()
{
	//1.
	/*int a = 3;
	int b = -5;
	printf("交换前:a = %d  b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后:a = %d  b = %d\n", a, b);*/

	//2.
	int a = 3;
	int b = -5;
	printf("交换前:a = %d  b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后:a = %d  b = %d\n", a, b);
	return 0;
}