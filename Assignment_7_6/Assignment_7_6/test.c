#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//模拟实现strcmp
//
//#include<assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char str1[] = "abcdffe";
//	char str2[] = "abcdd";
//	if (my_strcmp(str1, str2) == 0)
//	{
//		printf("str1 = str2\n");
//	}
//	else if (my_strcmp(str1, str2) > 0)
//	{
//		printf("str1 > str2\n");
//	}
//	else
//	{
//		printf("str1 < str2\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//模拟实现strstr
//
//#include<assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char str1[] = "abbbcdef";
//	char str2[] = "bbc";
//	char* index = my_strstr(str1, str2);
//	printf("%s\n", index);
//	return 0;
//}




//-----------------------------------------------
//模拟实现memcpy
//
//#include<assert.h>
//
//void* my_memcpy(void* dst, const void* src, size_t num)
//{
//	assert(dst && src);
//	void* start = dst;
//	while (num--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return start;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//模拟实现memmove

#include<assert.h>

void* my_memmove(void* dst, const void* src, size_t num)
{
	assert(dst && src);
	void* start = dst;
	if (dst < src)
	{
		while (num--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dst + num) = *((char*)src + num);
		}
	}
	return start;
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	my_memmove(arr + 1, arr + 4, 16);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}