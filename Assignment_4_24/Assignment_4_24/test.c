#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//
//int main()
//{
//	char arr1[11] = "hello bit!";
//	char arr2[11] = "HELLO BIT!";
//	printf("交换前\n");
//	printf("arr1 >> %s\n", arr1);
//	printf("arr2 >> %s\n", arr2);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		char tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("交换后\n");
//	printf("arr1 >> %s\n", arr1);
//	printf("arr2 >> %s\n", arr2);
//	return 0;
//}




//-----------------------------------------------
//创建一个整形数组，完成对数组的操作
//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。

void Init(int* a,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
	}
}

void Print(const int* a, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Reverse(int* a, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr,sz);
	Reverse(arr, sz);
	Print(arr, sz);
	Init(arr,sz);
	Print(arr,sz);
	return 0;
}