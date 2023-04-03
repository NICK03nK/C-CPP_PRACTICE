#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。(arr是一个整形一维数组)
//
//void Print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}




//-----------------------------------------------
//将一个字符串str的内容颠倒过来，并输出。
//
//#include<string.h>
//
//void reverse_str(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse_str(arr, &arr[len - 1]);
//	printf("%s\n", arr);
//	return 0;
//}




//-----------------------------------------------
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//例如：2 + 22 + 222 + 2222 + 22222
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int tmp = n;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sum += tmp;
//		tmp *= 10;
//		tmp += n;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//-----------------------------------------------
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int count = 0;
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//打印菱形

int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	int j = 0;
	for (i = 0; i <= line; i++)
	{
		for (j = 0; j < line - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}