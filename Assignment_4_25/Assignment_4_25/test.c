#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void BubbleSort(int* a, int sz)
{
	int end = sz;
	while (end >= 2)
	{
		int i = 0;
		for (i = 1; i < end; i++)
		{
			if (a[i - 1] > a[i])
			{
				int tmp = a[i - 1];
				a[i - 1] = a[i];
				a[i] = tmp;
			}
		}
		end--;
	}
}

int main()
{
	int arr[] = { 14,44,3,-6,89,7,0,43,2,16 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}