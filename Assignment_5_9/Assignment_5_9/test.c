#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//BC68 - X形图案
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//BC54 - 获得月份天数
//
//int main()
//{
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year = 0;
//	int month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int day = arr[month];
//		if (month == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			{
//				day = arr[month] + 1;
//			}
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}




//-----------------------------------------------
//BC51-三角形判断
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a + b <= c) || (a + c <= b) || (b + c <= a))
//		{
//			printf("Not a triangle!\n");
//		}
//		else
//		{
//			if (a == b && a == c && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//	}
//	return 0;
//}