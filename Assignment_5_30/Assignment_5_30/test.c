#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//#include<string.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
// }
//
//void rotate_str(char* p, int k, int len)
//{
//	//左旋
//	reverse(p, p + len - 1);
//	reverse(p + len - k, p + len - 1);
//	reverse(p, p + len - k - 1);
//
//	//右旋
//	/*reverse(p, p + len - 1);
//	reverse(p, p + k - 1);
//	reverse(p + k, p + len - 1);*/
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(arr);
//	k %= len;
//	rotate_str(arr, k, len);
//	puts(arr);
//	return 0;
//}




//-----------------------------------------------
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N)

int Find_Key(int a[10][10], int x, int y, int k, int* kx, int* ky)
{
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0)
	{
		if (a[i][j] < k)
		{
			i++;
		}
		else if (a[i][j] > k)
		{
			j--;
		}
		else
		{
			*kx = i;
			*ky = j;
			return 1;
		}
	}
	*kx = -1;
	*ky = -1;
	return 0;
}

int main()
{
	int arr[10][10] = { 0 };
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int key = 0;
	scanf("%d", &key);
	int kx = -1;
	int ky = -1;
	if (Find_Key(arr, x, y, key, &kx, &ky))
	{
		printf("找到了，其下标为>>%d %d\n", kx, ky);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}