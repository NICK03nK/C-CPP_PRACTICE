#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0;
//	int j = 0;
//	while (i < m && j < n)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == m)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else if (j == n)
//	{
//		for (; i < m; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少
//
//#include<math.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 0;
//    int i = 0;
//    for (i = 0; n > 0; i++)
//    {
//        int tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            tmp = 0;
//        }
//        else
//        {
//            tmp = 1;
//        }
//        ret += tmp * pow(10, i);
//        n /= 10;
//    }
//    printf("%d\n", ret);
//    return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的带空格直角三角形图案
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到
//如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）
//则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用）
//求KiKi最终所花的钱数

//输入：一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示
//当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）
//注：输入日期保证只有“双11”和“双12”

//输出：一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）

int main()
{
	double price = 0.0;
	int month = 0;
	int day = 0;
	int ticket = 0;
	double pay = 0.0;
	scanf("%lf %d %d %d", &price, &month, &day, &ticket);
	if (month == 11 && day == 11)
	{
		pay = 0.7 * price;
	}
	else if (month == 12 && day == 12)
	{
		pay = 0.8 * price;
	}
	if (ticket)
	{
		pay -= 50;
	}
	if (pay < 0)
	{
		pay = 0.0;
	}
	printf("%.2lf", pay);
	return 0;
}