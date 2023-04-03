#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//BC117 - 小乐乐走台阶
//
//int Fib(int n)
//{
//    if (n <= 2)
//    {
//        return n;
//    }
//    else
//    {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}




//-----------------------------------------------
//BC98-序列中删除指定数字
// 
int main()
{
	int arr[50] = { 0 };
	int m = 0;
	scanf("%d", &m);
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr[i]);
	}
	int n = 0;
	scanf("%d", &n);
	int j = 0;
	for (i = 0; i < m; i++)
	{
		/*if (arr[i] == n)
		{
			int j = 0;
			for (j = i; j < m; j++)
			{
				arr[j] = arr[j + 1];
			}
			i = -1;
			m--;
		}*/

		if (arr[i] != n)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}




//-----------------------------------------------
//BC95-最高分和最低分之差
// 
//int main()
//{
//	int arr[10000] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}




//-----------------------------------------------
//BC48-字母大小写转换
// 
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			ch -= 32;
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			ch += 32;
//		}
//		printf("%c\n", ch);
//	}
//	return 0;
//}





//-----------------------------------------------
//BC47-判断是不是字母
// 
//int main()
//{
//    char c = 0;
//    while (scanf("%C", &c) != EOF)
//    {
//        if (c != '\n')
//        {
//            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//            {
//                printf("%c is an alphabet.\n", c);
//            }
//            else
//            {
//                printf("%c is not an alphabet.\n", c);
//            }
//        }
//    }
//    return 0;
//}




//-----------------------------------------------
//BC45-最高分数
// 
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}




//-----------------------------------------------
//BC38-变种水仙花数
//
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int n1 = i / 10000 % 10;
//        int n2 = i - n1 * 10000;
//
//        int n3 = n1 * 10 + i / 1000 % 10;
//        int n4 = i - n3 * 1000;
//
//        int n5 = n3 * 10 + i / 100 % 10;
//        int n6 = i - n5 * 100;
//
//        int n7 = n5 * 10 + i / 10 % 10;
//        int n8 = i - n7 * 10;
//
//        if (i == n1 * n2 + n3 * n4 + n5 * n6 + n7 * n8)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//
//
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=10000;i<99999;i++)
    {
        int sum=0;
        for(j=10;j<=10000;j=10*j)
        {
            sum+=(i/j)*(i%j);
        }
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}*/