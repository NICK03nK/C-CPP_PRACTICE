#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

int main()
{
	int n = 0;
	scanf("%d", &n);
	int bottle = n;
	int count = n;
	while (bottle >= 2)
	{
		count += bottle / 2;
		bottle = bottle / 2 + bottle % 2;
	}
	printf("%d\n", count);
	return 0;
}