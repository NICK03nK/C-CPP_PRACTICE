#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//程序死循环解释
//VS开发环境调试下面的代码，画图解释下面代码的问题
//
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}




//-----------------------------------------------
//模拟实现库函数strlen
//
//int my_strlen(const char* pa)
//{
//	char* start = pa;
//	while (*pa != '\0')
//	{
//		pa++;
//	}
//	return pa - start;
//}
//
//int main()
//{
//	char arr[] = "keep moving";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




//-----------------------------------------------
//模拟实现库函数strcpy
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "keep moving";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}




//-----------------------------------------------
//调整数组使奇数全部都位于偶数前面
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Exchange(int* pa, int sz)
{
	int odd = 0;
	int even = sz - 1;
	while (odd < even)
	{
		while (odd < even && pa[odd] % 2 != 0)
		{
			odd++;
		}
		while (odd < even && pa[even] % 2 == 0)
		{
			even--;
		}
		if (odd < even)
		{
			Swap(&pa[odd], &pa[even]);
		}
	}
}

int main()
{
	int arr[] = { 0,0,4,3,5,7,2,6,9,1,8,1,3,7,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Exchange(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}