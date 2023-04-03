#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//暴力求解
//void Find_single(int* p, int* k, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (p[j] == p[i])
//			{
//				count++;
//				if (count == 2)
//				{
//					break;
//				}
//			}
//		}
//		if (count != 2)
//		{
//			*k++ = p[i];
//		}
//	}
//}

void Find_single(int* p, int* pdog1, int* pdog2, int sz)
{
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= p[i];
	}
	int count = 0;
	while ((ret & 1) != 1)
	{
		ret >>= 1;
		count++;
	}
	for (i = 0; i < sz; i++)
	{
		if ((p[i] >> count) & 1)
		{
			*pdog1 ^= p[i];
		}
		else
		{
			*pdog2 ^= p[i];
		}
	}
}

int main()
{
	int arr[] = { 3,9,4,5,1,1,2,7,2,5,3,4 };

	/*int key[2] = { 0 };
	Find_single(arr, key, sizeof(arr) / sizeof(arr[0]));*/
	/*int i = 0;
	for (i = 0; i < 2; i++)
	{
		printf("%d ", key[i]);
	}*/

	int dog1 = 0;
	int dog2 = 0;
	Find_single(arr, &dog1, &dog2, sizeof(arr) / sizeof(arr[0]));
	printf("%d %d\n", dog1, dog2);
	return 0;
}




//-----------------------------------------------
//模拟实现strncpy
//
//#include<assert.h>
//
//char* my_strncpy(char* dst, const char* src, size_t num)
//{
//	assert(dst && src);
//	char* start = dst;
//	while (num--)
//	{
//		*dst++ = *src++;
//	}
//	return start;
//}
//
//int main()
//{
//	char str1[] = "hello nick!";
//	char str2[30] = { 0 };
//	my_strncpy(str2, str1, 5);
//	printf("%s", str2);
//	return 0;
//}




//-----------------------------------------------
//模拟实现strncat
//
//#include<assert.h>
//
//char* my_strncat(char* dst, const char* src, size_t num)
//{
//	assert(dst && src);
//	char* start = dst;
//	while (*dst)
//	{
//		dst++;
//	}
//	while (num-- && *src)
//	{
//		*dst++ = *src++;
//	}
//	*dst = '\0';
//	return start;
//}
//
//int main()
//{
//	char str1[30] = "hello ";
//	char str2[] = "nick!";
//	my_strncat(str1, str2, 3);
//	printf("%s", str1);
//	return 0;
//}




//-----------------------------------------------
//模拟实现atoi
//
//#include<assert.h>
//#include<ctype.h>
//#include<limits.h>
//
//enum Value
//{
//	INVALID,
//	VALID
//}val = INVALID;
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag * (*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		val = VALID;
//	}
//	return (int)ret;
//}
//
//int main()
//{
//	char str[20] = { 0 };
//	gets(str);
//	int ret = my_atoi(str);
//	if (val)
//	{
//		printf("合法转换：%d\n", ret);
//	}
//	else
//	{
//		printf("非法转换：%d\n", ret);
//	}
//	return 0;
//}