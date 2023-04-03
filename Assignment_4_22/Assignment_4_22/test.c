#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//递归方式实现打印一个整数的每一位
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}



//----------------------------------------------
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//
//迭代
//int Fac(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}


//递归
//int Fac(int n)
//{
//	if (n > 1)
//	{
//		return Fac(n - 1) * n;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = Fac(num);
//	printf("%d\n", n);
//	return 0;
//}



//----------------------------------------------
//递归和非递归分别实现strlen
// 
//迭代
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "focus on your target!";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}




//----------------------------------------------
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印
//要求：不能使用C函数库中的字符串操作函数

#include<string.h>

void reverse_string(char* str)
{
	int len = strlen(str);
	int tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}




//----------------------------------------------
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
// 
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	return n % 10;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}



//----------------------------------------------
//编写一个函数实现n的k次方，使用递归实现
// 
//int my_pow(int num, int k)
//{
//	if (k > 1)
//	{
//		return my_pow(num, k - 1) * num;
//	}
//	return num;
//}
//
//int main()
//{
//	int num = 0;
//	int k = 0;
//	scanf("%d %d", &num, &k);
//	int ret = my_pow(num, k);
//	printf("%d\n", ret);
//	return 0;
//}




//----------------------------------------------
//递归和非递归分别实现求第n个斐波那契数
// 
//迭代
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}


//递归
//int Fib(int n)
//{
//	if (n >= 3)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("%d\n", ret);
//	return 0;
//}