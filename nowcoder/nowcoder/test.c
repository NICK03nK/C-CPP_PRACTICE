#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//国王将金币作为工资，发放给忠诚的骑士。第一天，骑士收到
//一枚金币；之后两天（第二天和第三天），每天收到两枚金币；
//之后三天（第四、五、六天），每天收到三枚金币；之后四
//天（第七、八、九、十天），每天收到四枚金币……；这种工资
//发放模式会一直这样延续下去：当连续N天每天收到N枚金币后，
//骑士会在之后的连续N+1天里，每天收到N+1枚金币。
//请计算在前K天里，骑士一共获得了多少金币。
//
//
//int gold(int k)
//{
//	int n = 0;
//	int sum = 0;
//	while (1)
//	{
//		n++;
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			k--;
//			sum += n;
//			if (k == 0)
//			{
//				return sum;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	printf("%d\n", gold(k));
// 	return 0;
//}




//-----------------------------------------------
//打印回文数
// 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int tmp = 0;
//		int num = i;
//		while (num)
//		{
//			tmp = tmp * 10 + num % 10;
//			num /= 10;
//		}
//		if (tmp == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
//tips:对每个数进行检验，检验方法为将该数反写，比较两数是否相同，相同则为回文数。




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案
//多组输入，一个整数（1~100），表示线段长度，即“*”的数量
//
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//多组输入，一个整数（1~20），表示正方形的长度，也表示输出行数
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
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数
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
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//多组输入，一个整数（2~20），表示翻转直角三角形直角边的长度，即“*”的数量，也表示输出行数
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
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数
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
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的金字塔图案
//多组输入，一个整数（2~20），表示金字塔边的长度，即“*”的数量，，也表示输出行数
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
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转金字塔图案
//多组输入，一个整数（2~20），表示翻转金字塔边的长度，即“*”的数量，也表示输出行数
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
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的菱形图案
//多组输入，一个整数（2~20）
//
//int main()
//{
//	int line = 0;
//	while (scanf("%d", &line) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < line + 1; i++)
//		{
//			for (j = 0; j < line - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i < line; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < line - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的K形图案
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n + 1; i++)
//	{
//		for (j = 0; j < n + 1 - i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i + 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n + 1; i++)
//		{
//			for (j = 0; j < 2 * (n - i); j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < 2 * (i + 1); j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的反斜线形图案
//多组输入，一个整数（2~20），表示输出的行数，也表示组成反斜线的“*”的数量
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
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正斜线形图案
//多组输入，一个整数（2~20），表示输出的行数，也表示组成正斜线的“*”的数量
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
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，
//该任务是打印用“*”组成的“空心”正方形图案
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量
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
//				if (i == 0 || i == n - 1)
//				{
//					printf("* ");
//				}
//				else if (j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”三角形图案
//多组输入，一个整数（3~20），表示输出的行数，也表示组成三角形边的“*”的数量
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
//				if (i == n - 1)
//				{
//					printf("* ");
//				}
//				else if ((j == 0) || (j == i))
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用数字组成的数字三角形图案
//多组输入，一个整数（3~20），表示数字三角形边的长度，即数字的数量，也表示输出行数
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------  <待完善>
//今天是圣诞节，牛牛要打印一个漂亮的圣诞树送给想象中的女朋友，请你帮助他实现梦想
//
//int main()
//{
//	int h = 0;
//	scanf("%d", &h);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < h * 3; i++)
//	{
//		for (j = 0; j < h * 3 + i; j++)
//		{
//			if (j < h * 3 - i - 1)
//			{
//				printf(" ");
//			}
//			else
//			{
//				if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//试计算在区间1 到n 的所有整数中，数字x（0 ≤ x ≤ 9）共出现了多少次？
//例如，在1到11 中，即在1、2、3、4、5、6、7、8、9、10、11 中，数字1 出现了4 次
//
//int main()
//{
//	int n = 0;
//	int x = 0;
//	scanf("%d %d", &n, &x);
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == x)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//-----------------------------------------------
//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//输入数字N，然后输入N个数，计算这N个数的和
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//-----------------------------------------------
//期中考试开始了，大家都想取得好成绩，争夺前五名
//从键盘输入 n 个学生成绩，输出每组排在前五高的成绩
//两行，第一行输入一个整数，表示n个学生（>=5），
//第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int cur = 0;
//	int p = 0;
//	int max = 0;
//	for (p = 0; p < 5; p++)
//	{
//		cur = p;
//		max = cur;
//		for (; cur < n; cur++)
//		{
//			if (arr[cur] > arr[max])
//			{
//				max = cur;
//			}
//		}
//		int tmp = arr[p];
//		arr[p] = arr[max];
//		arr[max] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//输入一个整数序列，判断是否是有序序列，
//有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int c1 = 0;
//	int c2 = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] - arr[i + 1] < 0)
//		{
//			c1++;
//		}
//		else
//		{
//			c2++;
//		}
//	}
//	if ((c1 == n - 1) || (c2 == n - 1))
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
//第一行输入一个整数N(0≤N≤50)
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数
//第三行输入想要进行插入的一个整数
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[51] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > k)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			break;
//		}
//	}
//	arr[i + 1] = k;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变
//第一行输入一个整数(0≤N≤50)
//第二行输入N个整数，输入用空格分隔的N个整数
//第三行输入想要进行删除的一个整数
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int d = 0;
//	scanf("%d", &d);
//	
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != d)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//输入n个整数的序列，要求对这个序列进行去重操作
//所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置
//输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；
//第二行包含n个整数（范围1~5000），用空格分隔
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 1;
//		scanf("%d", &arr1[i]);
//		for (j = 0; j < k; j++)
//		{
//			if (arr2[j] == arr1[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			arr2[k++] = arr1[i];
//		}
//	}
//	for (j = 0; j < k; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	return 0;
//}




//-----------------------------------------------
//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现
//第一行，一个整数，表示n（1 <= n <= 100）
//第二行，共输入n个整数，两个整数之间用空格分隔
//第三行，输入一个整数，表示要查找的整数x
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x = 0;
//	scanf("%d", &x);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//-----------------------------------------------
//用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，
//将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，
//以此类推，直到n为止。数组中不为0 的数即为素数
//多组输入，每行输入一个正整数（不大于100）
//
//int main()
//{
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		int k = 2;
//		int i = 0;
//		int j = 0;
//		for (i = 0; i <= n - 2; i++)
//		{
//			if (k <= n)
//			{
//				arr1[i] = k++;
//				arr2[i] = arr1[i];
//			}
//		}
//		//判断并且置0
//		for (i = 0; i <= n - 2; i++)
//		{
//			for (j = i + 1; j <= n - 2; j++)
//			{
//				if ((arr2[j] != 0) && (arr2[j] % arr1[i] == 0))
//				{
//					arr2[j] = 0;
//					count++;
//				}
//			}
//		}
//		for (j = 0; j <= n - 2; j++)
//		{
//			if (arr2[j])
//			{
//				printf("%d ", arr2[j]);
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}




//-----------------------------------------------
//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分
//输入：五行，每行输入一个学生各5科成绩（浮点数表示，范围0.0~100.0），用空格分隔
//输出：五行，按照输入顺序每行输出一个学生的5科成绩及总分（小数点保留1位），用空格分隔
//
//int main()
//{
//	double arr[5][6] = { 0.0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%lf", &arr[i][j]);
//			arr[i][5] += arr[i][j];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			printf("%.1lf ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务
//第一行包含两个数n和m，表示这个矩阵包含n行m列。
//从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，
//表示矩阵中的元素。接下来一行输入x和y，用空格分隔，表示KiKi想得到的元素的位置。
//(1≤x≤n≤10，1≤y≤m≤10)
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("%d\n", arr[x - 1][y - 1]);
//	return 0;
//}




//-----------------------------------------------
//KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务
//第一行包含两个整数n和m，表示这个方阵队列包含n行m列。
//从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，
//表示方阵中的所有人的身高（保证输入身高都不相同）。(1≤x≤n≤10，1≤y≤m≤10)
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x = 0;
//	int y = 0;
//	int max = arr[0][0];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d\n", x + 1, y + 1);
//	return 0;
//}




//-----------------------------------------------
//KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他
//(当两个矩阵对应数组元素都相等时两个矩阵相等)
//第一行包含两个整数n和m，表示两个矩阵包含n行m列，用空格分隔。
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
//从n + 2行到2n + 1，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第二个矩阵中的元素。
//1 < n, m < 10
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和
//第一行为N M(N: 矩阵行数；M: 矩阵列数,且M,N<=10)，接下来的N行为矩阵各行
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//-----------------------------------------------
//给你一个整数n，按要求输出n∗n的回型矩阵
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[19][19] = { 0 };
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	int y = n - 1;
//	int count = 1;
//	while (count != n * n + 1)
//	{
//		for (i = x, j = x; j <= y; j++)
//		{
//			arr[i][j] = count++;
//		}
//		for (i = x + 1, j -= 1; i <= y; i++)
//		{
//			arr[i][j] = count++;
//		}
//		for (j = y - 1, i -= 1; j >= x; j--)
//		{
//			arr[i][j] = count++;
//		}
//		for (i = y - 1, j += 1; i >= x + 1; i--)
//		{
//			arr[i][j] = count++;
//		}
//		x++;
//		y--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//给你一个整数n，输出n∗n的蛇形矩阵。
//输入描述：
//输入一行，包含一个整数n
//输出描述：
//输出n行，每行包含n个正整数，通过空格分隔。
//1 <= n <= 1000

int main()
{

	return 0;
}




//-----------------------------------------------
//给出两幅相同大小的黑白图像（用0-1矩阵）表示，求它们的相似度
//若两幅图像在相同位置上的像素点颜色相同，则称它们在该位置具有相同的像素点
//两幅图像的相似度定义为相同像素点数占总像素点数的百分比
//
//第一行包含两个整数m和n，表示图像的行数和列数，用单个空格隔开
//1≤m≤100, 1≤n≤100。之后m行，每行n个整数0或1，表示第一幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开
//之后m行，每行n个整数0或1，表示第二幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int count = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	double percentage = 100.0 * count / (m * n);
//	printf("%.2lf", percentage);
//	return 0;
//}




//-----------------------------------------------
//KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定
//上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线
//第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。 (2≤n≤10)
//从2到n + 1行，每行输入n个整数（范围 - 231~231 - 1），用空格分隔，共输入n * n个数
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int flag = 1;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto out;
//			}
//		}
//	}
//out:
//	if (flag)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi现在得到一个包含n*m个数的整数序列，现在他需要把这n*m个数
//按顺序规划成一个n行m列的矩阵并输出，请你帮他完成这个任务
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n * m; i++)
//	{
//		if ((i != 0) && (i % m == 0))
//		{
//			printf("\n");
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi有一个矩阵，他想知道经过k次行变换或列变换后得到的矩阵
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
//接下来一行输入k，表示要执行k次操作（1≤k≤5）。接下来有k行，每行包括一个字符t和两个数a和b，中间用空格格分隔，
//t代表需要执行的操作，当t为字符'r'时代表进行行变换，当t为字符'c'时代表进行列变换，a和b为需要互换的行或列
//（1≤a≤b≤n≤10，1≤a≤b≤m≤10）
//提示：当t为别的字符时不需要处理
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int k = 0;
//	scanf("%d", &k);
//	char t = 0;
//	int a = 0;
//	int b = 0;
//	while (k--)
//	{
//		getchar();
//		scanf("%c %d %d", &t, &a, &b);
//		if (t == 't')
//		{
//			;
//		}
//		else if (t == 'r')
//		{
//			int j = 0;
//			for (j = 0; j < m; j++)
//			{
//				int tmp = arr[a - 1][j];
//				arr[a - 1][j] = arr[b - 1][j];
//				arr[b - 1][j] = tmp;
//			}
//		}
//		else if (t == 'c')
//		{
//			int i = 0;
//			for (i = 0; i < n; i++)
//			{
//				int tmp = arr[i][a - 1];
//				arr[i][a - 1] = arr[i][b - 1];
//				arr[i][b - 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi知道什么叫杨辉三角之后对杨辉三角产生了浓厚的兴趣，他想知道杨辉三角的前n行
//杨辉三角，本质上是二项式(a+b)的n次方展开后各项的系数排成的三角形。
//其性质包括：每行的端点数为1， 一个数也为1；每个数等于它左上方和上方的两数之和
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50][50] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi和BoBo玩 “井”字棋。也就是在九宫格中，
//只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜请根据棋盘状态，判断当前输赢
//
//char Is_win(char board[3][3])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != 'O')
//		{
//			return board[i][1];
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != 'O')
//		{
//			return board[1][i];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != 'O')
//	{
//		return board[1][1];
//	}
//	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != 'O')
//	{
//		return board[1][1];
//	}
//	return 'N';
//}
//
//int main()
//{
//	char board[3][3] = { 'O'};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf(" %c", &board[i][j]);
//		}
//	}
//	char ret = Is_win(board);
//	if (ret == 'K')
//	{
//		printf("KiKi wins!\n");
//	}
//	else if (ret == 'B')
//	{
//		printf("BoBo wins!\n");
//	}
//	else if (ret == 'N')
//	{
//		printf("No winner!\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//小sun上课的时候非常喜欢玩扫雷。他现小sun有一个初始的雷矩阵，他希望你帮他生成一个扫雷矩阵
//扫雷矩阵的每一行每一列都是一个数字，每个数字的含义是与当前位置相邻的8个方向中，有多少个雷
//（在下图中，雷用* 表示）；如果当前位置就是雷的话，仍输出一个*
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	char board[1002][1002] = { '.' };
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < n + 1; i++)
//	{
//		for (j = 1; j < m + 1; j++)
//		{
//			scanf(" %c", &board[i][j]);
//		}
//	}
//	for (i = 1; i < n + 1; i++)
//	{
//		for (j = 1; j < m + 1; j++)
//		{
//			if (board[i][j] == '.')
//			{
//				int count = 0;
//				if (board[i - 1][j] == '*')
//					count++;
//				if (board[i - 1][j + 1] == '*')
//					count++;
//				if (board[i][j + 1] == '*')
//					count++;
//				if (board[i + 1][j + 1] == '*')
//					count++;
//				if (board[i + 1][j] == '*')
//					count++;
//				if (board[i + 1][j - 1] == '*')
//					count++;
//				if (board[i][j - 1] == '*')
//					count++;
//				if (board[i - 1][j - 1] == '*')
//					count++;
//				board[i][j] = count + '0';
//			}
//			else
//			{
//				;
//			}
//		}
//	}
//	for (i = 1; i < n + 1; i++)
//	{
//		for (j = 1; j < m + 1; j++)
//		{
//			printf("%c", board[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//凯刚写了一篇美妙的作文，请问这篇作文的标题中有多少个字符
//注意：标题中可能包含大、小写英文字母、数字字符、空格和换行符。统计标题字 符数时，空格和换行符不计算在内
//
//#include<string.h>
//
//int main()
//{
//	char s[20] = { 0 };
//	gets(s);
//	int len = strlen(s);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//			count++;
//		else if (s[i] >= '0' && s[i] <= '9')
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}




//-----------------------------------------------
//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功
//多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个为密码
//
//#include<string.h>
//
//int main()
//{
//	char id[20] = { 0 };
//	char pw[20] = { 0 };
//	while (scanf("%s %s", id, pw) != EOF)
//	{
//		if ((strcmp(id, "admin") == 0) && (strcmp(pw, "admin") == 0))
//		{
//			printf("Login Success\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//笨小猴的词汇量很小，所以每次做英语选择题的时候都很头疼。但是他找到了一种方法，经试验证明，用这种方法去选择选项的时候选对的几率非常大！
//这种方法的具体描述如下：假设maxn是单词中出现次数最多的字母的出现次数，minn是单词中出现次数最少的字母的出现次数，
//如果maxn - minn是一个质数，那么笨小猴就认为这是个Lucky Word，这样的单词很可能就是正确的答案
//只有一行，是一个单词，其中只可能出现小写字母，并且长度小于100
//
//#include<string.h>
//#include<math.h>
//
//int Is_Prime(int n)
//{
//	if (n < 2)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	char word[100] = { 0 };
//	gets(word);
//	int len = strlen(word);
//	char k = 0;
//	int maxn = 0;
//	int minn = len;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		int count = 0;
//		k = word[i];
//		for (j = 0; j < len; j++)
//		{
//			if (word[j] == k)
//			{
//				count++;
//			}
//		}
//		if (count > maxn)
//		{
//			maxn = count;
//		}
//		if (count < minn)
//		{
//			minn = count;
//		}
//	}
//	if (Is_Prime(maxn - minn))
//	{
//		printf("Lucky Word\n%d\n", maxn - minn);
//	}
//	else
//	{
//		printf("No Answer\n0\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//对于一个较大的整数 N(1<=N<=2,000,000,000)
//比如 980364535，我们常常需要一位一位数这个数字是几位数，但是如果在这 个数字每三位加一个逗号，它会变得更加易于朗读
//因此，这个数字加上逗号成如下的模样：980, 364, 535
//
//#include<string.h>
//
//void reverse(char* p)
//{
//	int len = strlen(p);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void separate_data(char* p1, char* p2)
//{
//	int len = strlen(p1);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		if ((i != 0) && (i % 3 == 0))
//		{
//			p2[j++] = ',';
//		}
//		p2[j++] = p1[i];
//	}
//}
//
//int main()
//{
//	char data1[20] = { 0 };
//	char data2[20] = { 0 };
//	gets(data1);
//	reverse(data1);
//	separate_data(data1, data2);
//	reverse(data2);
//	puts(data2);
//	return 0;
//}




//-----------------------------------------------
//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长
//一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等
//
//#include<string.h>
//
//int main()
//{
//	char arr[50] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int count_A = 0;
//	int count_B = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] == 'A')
//			count_A++;
//		if (arr[i] == 'B')
//			count_B++;
//	}
//	if (count_A > count_B)
//	{
//		printf("A\n");
//	}
//	else if (count_A < count_B)
//	{
//		printf("B\n");
//	}
//	else
//	{
//		printf("E\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//给定长度为n的只有小写字母的字符串s，进行m次操作，每次将[l,r]范围内所有c1字符改成c2，输出操作完的字符串
//第一行两个数n,m
//第二行一个字符串s
//之后m行，每行两个数l r两个字符c1 c2
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	char str[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf(" %c", &str[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		int l = 0;
//		int r = 0;
//		char c1 = 0;
//		char c2 = 0;
//		scanf("%d %d %c %c", &l, &r, &c1, &c2);
//		int j = 0;
//		for (j = l - 1; j <= r - 1; j++)
//		{
//			if (str[j] == c1)
//			{
//				str[j] = c2;
//			}
//		}
//	}
//	puts(str);
//	return 0;
//}




//-----------------------------------------------
//规定一种对于复合词的简写方式为只保留每个组成单词的首字母，并将首字母大写后再连接在一起
//比如 “College English Test”可以简写成“CET”，“Computer Science”可以简写为“CS”，“I am Bob”简写为“IAB”
//输入一个长复合词（组成单词数 sum, sum\geq1且sum\leq100sum, sum≥1且sum≤100, 每个单词长度len, len\geq1且len\leq50len, len≥1且len≤50），请你输出它的简写
//
//#include<string.h>
//
//int main()
//{
//	char str[5000] = { 0 };
//	char cpw[5000] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	int i = 0;
//	int j = 0;
//	cpw[j++] = str[i];
//	for (i = 1; i < len; i++)
//	{
//		if (str[i - 1] == ' ')
//		{
//			cpw[j++] = str[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		if (cpw[i] >= 'a' && cpw[i] <= 'z')
//		{
//			cpw[i] -= 32;
//		}
//	}
//	puts(cpw);
//	return 0;
//}




//-----------------------------------------------
//小乐乐学会了自定义函数，BoBo老师给他出了个问题，根据以下公式计算m的值
//m=max3(a+b,b,c)/max3(a,b+c,c)+max3(a,b,b+c)
//其中 max3函数为计算三个数的最大值，如： max3(1, 2, 3) 返回结果为3
//
//int max3(int a, int b, int c)
//{
//	return ((a > b ? a : b) > c ? (a > b ? a : b) : c);
//}
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2lf\n", m);
//	return 0;
//}




//-----------------------------------------------
//求出[a,b]区间内有多少个数数位之和为5的倍数
//输入一行包含两个整数a,b (1<= a<= b<=1000000)
//
//int Func(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = a; i <= b; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			sum += tmp % 10;
//			tmp /= 10;
//		}
//		if (sum % 5 == 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Func(a, b);
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//巴啦啦能量，沙鲁沙鲁，小魔仙大变身：对于一个数，把他所有位上的数字进行加和，得到新的数
//如果这个数字是个位数的话，那么他就满足条件
//函数递归
//
//int Magic(int n)
//{
//	int sum = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		sum += tmp % 10;
//		tmp /= 10;
//	}
//	if (sum < 10)
//	{
//		return sum;
//	}
//	return Magic(sum);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Magic(n);
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
//比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，
//在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。
//
//int main()
//{
//	int l = 0;
//	int r = 0;
//	scanf("%d %d", &l, &r);
//	int count = 0;
//	int i = 0;
//	for (i = l; i <= r; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 2)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//-----------------------------------------------
//牛牛很喜欢发短信，他所用的通讯公司的收费方法如下：
//1.每条短信收费0.1元
//2.每条短息的字数不超过60字，如果超过60字，将按照0.2元的价格收费
//牛牛这个月发了 n 条短信，请问牛牛一共要缴多少短信费
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int message = 0;
//	double cost = 0.0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &message);
//		cost += 0.1;
//		if (message > 60)
//		{
//			cost += 0.1;
//		}
//	}
//	printf("%.1lf\n", cost);
//	return 0;
//	return 0;
//}




//-----------------------------------------------
//牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
//牛牛想知道在[l, r] 范围内全部素数的和
//
//#include<math.h>
//
//int Is_Prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int l = 0;
//	int r = 0;
//	scanf("%d %d", &l, &r);
//	int sum = 0;
//	int i = 0;
//	for (i = l; i <= r; i++)
//	{
//		int ret = Is_Prime(i);
//		if (ret)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//-----------------------------------------------
//hxy考试试题第三题
//字符串保留数字字符，去重，排序
//
//#include<string.h>
//#include<stdlib.h>
//
//int cmp_char(const void* e1, const void* e2)
//{
//	return((*(char*)e1 - '0') - (*(char*)e2 - '0'));
//}
//
//int main()
//{
//	char arr1[50] = { 0 };
//	char arr2[50] = { 0 };
//	gets(arr1);
//	int len1 = strlen(arr1);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len1; i++)
//	{
//		if (arr1[i] >= '0' && arr1[i] <= '9')
//		{
//			arr2[j++] = arr1[i];
//		}
//	}
//	int len2 = strlen(arr2);
//	char arr3[50] = { 0 };
//	int k = 0;
//	for (i = 0; i < len2; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < k; j++)
//		{
//			if (arr3[j] == arr2[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			arr3[k++] = arr2[i];
//		}
//	}
//	qsort(arr3, strlen(arr3), sizeof(arr3[0]), cmp_char);
//	puts(arr3);
//	return 0;
//}




//-----------------------------------------------<***>
//牛牛刚学会数组不久，他拿到两个数组 a 和 b，询问 b 的哪一段连续子数组之和与数组 a 之和最接近。
//如果有多个子数组之和同样接近，输出起始点最靠左的数组。
//
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[50] = { 0 };
//	int arr2[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int min = 9999999;
//	int sum1 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum1 += arr1[i];
//	}
//	int left = 0;
//	int right = 0;
//	for (i = 0; i < m; i++)
//	{
//		int sum2 = 0;
//		int j = 0;
//		for (j = i; j < m; j++)
//		{
//			sum2 += arr2[j];
//			if (abs(sum2 - sum1) < min)
//			{
//				min = abs(sum2 - sum1);
//				left = i;
//				right = j;
//			}
//		}
//	}
//	for (i = left; i <= right; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//现在给出一个素数，这个素数满足两点：
//1、  只由1 - 9组成，并且每个数只出现一次，如13, 23, 1289。
//2、  位数从高到低为递减或递增，如2459，87631。
//请你判断一下，这个素数的回文数是否为素数（13的回文数是131, 127的回文数是12721）
//
//#include<math.h>
//
//int Is_Prime(long long n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	long long t = 0;
//	scanf("%d", &t);
//	int count = 0;
//	long long tmp = t;
//	while (tmp)
//	{
//		count++;
//		tmp /= 10;
//	}
//	long long num = t * pow(10, (count - 1));
//	int i = 0;
//	int j = 0;
//	for (i = 1, j = count - 2; i < count && j >= 0; i++, j--)
//	{
//		num += ((long long)(t / pow(10, i)) % 10) * (long long)pow(10, j);
//	}
//	if (Is_Prime(num))
//	{
//		printf("prime\n");
//	}
//	else
//	{
//		printf("noprime\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//若一个数（首位不为零）从左向右读与从右向左读都一样，我们就将其称之为回文数。
//例如：给定一个10进制数56，将56加65（即把56从右向左读），得到121是一个回文数。
//又如：对于10进制数87：
//STEP1：87 + 78 = 165                  STEP2：165 + 561 = 726
//STEP3：726 + 627 = 1353                STEP4：1353 + 3531 = 4884
//在这里的一步是指进行了一次N进制的加法，上例最少用了4步得到回文数4884。
//写一个程序，给定一个N（2 <= N <= 10或N = 16）进制数M（100位之内），求最少经过几步可以得到回文数。
//如果在30步以内（包含30步）不可能得到回文数，则输出“Impossible!”
//进制N > 10时，使用大写'A'字母表示10，'B'表示11, ..., 'F'表示16
//
//#include<math.h>
//#include<string.h>
//
//long long convert_10(long long n, long long N)
//{
//	long long ret = 0;
//	int count = 1;
//	long long tmp = n;
//	while (tmp /= 10)
//	{
//		count++;
//	}
//	int i = 0;
//	for (i = count - 1; i >= 0; i--)
//	{
//		ret += ((long long)(n / pow(10, i)) % 10) * (long long)pow(N, i);
//	}
//	return ret;
//}
//
//long long convert_N(long long n, long long N)
//{
//	if (n > N - 1)
//	{
//		return convert_N(n / N, N) * 10 + n % N;
//	}
//	return n % N;
//}
//
//long long convert_N_10(char* p, int N)
//{
//	long long key = 0;
//	int len = strlen(p);
//	int i = 0;
//	if (N == 2)
//	{
//		for (i = len - 1; i >= 0; i--)
//		{
//			key += (long long)((p[i] - '0') * pow(2, len - i - 1));
//		}
//	}
//	else if (N == 16)
//	{
//		for (i = len - 1; i >= 0; i--)
//		{
//			if (p[i] >= 'A' && p[i] <= 'F')
//			{
//				key += (long long)((p[i] - 55) * pow(16, len - i - 1));
//			}
//			else
//			{
//				key += (long long)((p[i] - '0') * pow(16, len - i - 1));
//			}
//		}
//	}
//	return key;
//}
//
//void reverse(char* p)
//{
//	int left = 0;
//	int right = strlen(p) - 1;
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void convert_10_N(long long n, char* p, int N)
//{
//	long long tmp = n;
//	int i = 0;
//	if (N == 2)
//	{
//		while (tmp)
//		{
//			p[i++] = (tmp % 2) + '0';
//			tmp /= 2;
//		}
//	}
//	else if (N == 16)
//	{
//		while (tmp)
//		{
//			long long ret = tmp;
//			tmp /= 16;
//			if (ret % 16 >= 10 && ret % 16 <= 16)
//			{
//				p[i++] = ret % 16 - 10 + 'A';
//			}
//			else
//			{
//				p[i++] = ret % 16 + '0';
//			}
//		}
//	}
//	reverse(p);
//}
//
//int main()
//{
//	long long N = 0;
//	scanf("%lld", &N);
//	int count = 0;
//	if (N > 2 && N <= 10)
//	{
//		long long num = 0;
//		scanf("%lld", &num);
//		long long value = num;
//		while (count <= 30)
//		{
//			count++;
//			long long ret1 = value;
//			long long ret2 = 0;
//			long long tmp = ret1;
//			while (tmp)
//			{
//				ret2 = ret2 * 10 + tmp % 10;
//				tmp /= 10;
//			}
//			long long key1 = convert_10(ret1, N);
//			long long key2 = convert_10(ret2, N);
//			long long ret3 = convert_N(key1 + key2, N);
//			tmp = ret3;
//			long long ret4 = 0;
//			while (tmp)
//			{
//				ret4 = ret4 * 10 + tmp % 10;
//				tmp /= 10;
//			}
//			if (ret4 == ret3)
//			{
//				break;
//			}
//			value = ret3;
//		}
//	}
//	else if (N == 2 || N == 16)
//	{
//		char num1[100] = { 0 };
//		scanf("%s", num1);
//		int len1 = strlen(num1);
//		char num2[100] = { 0 };
//		int i = 0;
//		int j = 0;
//		for (i = len1-1; i >= 0; i--)
//		{
//			num2[j++] = num1[i];
//		}
//		while (count <= 30)
//		{
//			count++;
//			long long key1 = convert_N_10(num1,N);
//			long long key2 = convert_N_10(num2,N);
//			char num3[100] = { 0 };
//			convert_10_N(key1 + key2, num3, N);
//			char num4[100] = { 0 };
//			strcpy(num4, num3);
//			reverse(num4);
//			if (strcmp(num4, num3) == 0)
//			{
//				break;
//			}
//			strcpy(num1, num3);
//			strcpy(num2, num4);
//		}
//	}
//	if (count <= 30)
//	{
//		printf("STEP=%d\n", count);
//	}
//	else
//	{
//		printf("Impossible!\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//兔子发现了一个数字序列，于是开始研究这个序列。兔子觉得一个序列应该需要有一个命名，命名应该要与这个序列有关。
//由于兔子十分讨厌完全平方数，所以兔子开创了一个新的命名方式：这个序列中最大的不是完全平方数的数字就是他的名字。
//现在兔子有一个序列，想要知道这个序列的名字是什么。
//第一行一个整数 n，表示序列的长度。
//第二行有 n 个整数 ai，表示序列中的 n 个数分别是多少。
//
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	int maxi = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int tmp = sqrt(arr[i]);
//		if ((tmp * tmp != arr[i]) && arr[i] > maxi)
//		{
//			maxi = arr[i];
//		}
//	}
//	printf("%d\n", maxi);
//	return 0;
//}




//-----------------------------------------------<error>
//小q最近迷上了各种好玩的数列，这天，他发现了一个有趣的数列，其递推公式如下：
//f[0] = 0 f[1] = 1;
//f[i] = f[i / 2] + f[i % 2]; (i >= 2)
//现在，他想考考你，问：给你一个n，代表数列的第n项，你能不能马上说出f[n]的值
//是多少，以及f[n]所代表的值第一次出现在数列的哪一项中？（这里的意思是：可以发
//现这个数列里某几项的值是可能相等的，则存在这样一个关系f[n'] = f[n] = f[x/2]+f[x%2]
//= f[x]...（n' < n < x） 他们的值都相等，这里需要你输出最小的那个n'的值)(n<10^18)
// 
//输入第一行一个t
//随后t行，每行一个数n，代表你需要求数列的第n项，和相应的n'
//(t < 4 * 10 ^ 5)
//输出每行两个正整数
//f[n]和n'，以空格分隔
//
//int Func(int i)
//{
//	if (i == 0)
//	{
//		return 0;
//	}
//	else if (i == 1)
//	{
//		return 1;
//	}
//	return Func(i / 2) + Func(i % 2);
//}
//
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	int arr[400000] = { 0 };
//	int i = 0;
//	for (i = 0; i < t; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < t; i++)
//	{
//		int ret = Func(i);
//		printf("%d ", ret);
//		int mini = i;
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if ((Func(j) == ret) && (j < i))
//			{
//				mini = j;
//				break;
//			}
//		}
//		printf("%d\n", mini);
//	}
//	return 0;
//}




//-----------------------------------------------
//糖和抖m在玩个游戏，规定谁输了就要请谁吃顿大餐：抖m给糖a b c三个驻， 并在a柱
//上放置了数量为n的圆盘，圆盘的大小从上到下依次增大，现在要做的事就是把a柱的圆
//盘全部移到c柱，移动的过程中保持小盘在上，大盘在下，且限定圆盘只能够移动到相邻
//的柱子，即a柱子上的圆盘只能够移动到b，b柱子上的圆盘只能够移动到a或者c，c同理。
//现在请你设计一个程序，计算所需移动的最小步数， 帮助糖赢得大餐！
//
//void Move(int* p)
//{
//	(*p)++;
//}
//
//void Hanoi(int n, int* count, char p1, char p2, char p3)
//{
//	if (n > 0)
//	{
//		Hanoi(n - 1, count, p1, p2, p3);
//		(*count)++;//p1,p2
//		Hanoi(n - 1, count, p3, p2, p1);
//		(*count)++;//p2,p3
//		Hanoi(n - 1, count, p1, p2, p3);
//	}
//	else
//	{
//		return;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		Hanoi(n, &count, 'a', 'b', 'c');
//		printf("%d\n", count);
//	}
//	return 0;
//}




//-----------------------------------------------
//牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
//牛牛想知道输入的 n 个数分别是不是素数
//第一行输入一个正整数 n ，表示后续要输入的数的数量。
//后续 n 行每行输入一个正整数，表示需要判断的数。
//输入的第 2 到第 n + 1 行每行输出一次，如果输入的是素数则输出 true ，否则输出 false
//
//#include<math.h>
//
//int Is_Prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int num = 0;
//		scanf("%d", &num);
//		if (Is_Prime(num))
//		{
//			printf("true\n");
//		}
//		else
//		{
//			printf("false\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//牛牛有一个长度为 n 的字符数组，他尝试把字符数组中其中一些字符替换成另一些字符。
//第一行输入一个正整数 n 表示字符数组的长度，四个个字符分别 a1 和 a2 ， a3 和 a4，
//表示把字符数组中 a1 全部替换成 a2，然后把 a3 全部替换成 a4（包括a1替换后产生的a2等于a3的情况）
//第二行输入一个长度为 n 的字符数组。
//
//int main()
//{
//	int n = 0;
//	char a1 = 0, a2 = 0, a3 = 0, a4 = 0;
//	scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
//	char str[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf(" %c", &str[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (str[i] == a1)
//		{
//			str[i] = a2;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (str[i] == a3)
//		{
//			str[i] = a4;
//		}
//	}
//	puts(str);
//	return 0;
//}




//-----------------------------------------------
//牛牛最近学了水仙花数，但是他并不喜欢水仙花，因此他准备算出 [l,r] 区间内的四叶玫瑰数。
//四叶玫瑰数：一个数的四个位置的数字的四次方加起来等于这个四位数本身的数。
//第一行输入两个正整数，表示闭区间的两头。
//
//#include<math.h>
//
//int main()
//{
//	int l = 0;
//	int r = 0;
//	scanf("%d %d", &l, &r);
//	int i = 0;
//	for (i = l; i <= r; i++)
//	{
//		int ret = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			ret += (int)pow(tmp % 10, 4);
//			tmp /= 10;
//		}
//		if (ret == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//世界上有10类人，1类是懂二进制的，另一类的不懂二进制的。牛牛是第10种人，因此他是懂二进制的。
//牛牛把二进制数分成两种，一种是 1 的数量是偶数的，牛牛称之为 1 数，一种是 0 的
//数量是偶数的，牛牛称之为 0 数，如果一个数同时是 1 数和 0 数，那称之为 10 数。
//第一行输入一个正整数 n 表示数的个数
//第二行输入 n 个正整数，表示每个输入的数字
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int num = 0;
//		scanf("%d", &num);
//		int count_1 = 0;
//		int count_0 = 0;
//		while (num)
//		{
//			if (num & 1)
//			{
//				count_1++;
//			}
//			else
//			{
//				count_0++;
//			}
//			num /= 2;
//		}
//		if ((count_1 % 2 == 0) && (count_0 % 2 != 0))
//		{
//			printf("1 ");
//		}
//		else if ((count_0 % 2 == 0) && (count_1 % 2 != 0))
//		{
//			printf("0 ");
//		}
//		else if ((count_1 % 2 == 0) && (count_0 % 2 == 0))
//		{
//			printf("10 ");
//		}
//		else
//		{
//			printf("100 ");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//编写一个函数 long long factorial(int n)，用于计算 n 的阶乘。（要求使用递归实现）
//
//long long factorial(int n)
//{
//	if (n > 1)
//	{
//		return factorial(n - 1) * n;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = factorial(n);
//	printf("%lld\n", ret);
//	return 0;
//}




//-----------------------------------------------
//牛牛最近学会了一些简单的数学运算,请你帮他模拟一下这个运算（即 1+2+3....+n-1+n）
//
//int Func(int n)
//{
//	if (n > 1)
//	{
//		return Func(n - 1) + n;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Func(n);
//	return 0;
//}




//-----------------------------------------------
//牛牛定义了一个函数 digit(x,i) ，表示分离出 x 的后 i 位的数字。
//
//void digit(int x, int i)
//{
//	static count = 0;
//	count++;
//	if ((x > 9) && (count != i))
//	{
//		digit(x / 10, i);
//	}
//	printf("%d", x % 10);
//}
//
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d %d", &x, &i);
//	digit(x, i);
//	return 0;
//}




//-----------------------------------------------
//牛牛学会了一个新的多项式，叫Hermite多项式，其表达式如下，牛牛想知道其中一个结果
//
//int Hermite(int n, int x)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2 * n;
//	}
//	return 2 * x * Hermite(n - 1, x) - 2 * (n - 1) * Hermite(n - 2, x);
//}
//
//int main()
//{
//	int n = 0;
//	int x = 0;
//	scanf("%d %d", &n, &x);
//	int ret = Hermite(n, x);
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//牛牛正在尝试计算一个排列数n(n−1)(n−2)...(n−m+1)
//
//int Func(int n, int ret)
//{
//	if (n == ret)
//	{
//		return n;
//	}
//	return Func(n - 1, ret) * n;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = Func(n, n - m + 1);
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//牛牛在尝试把一个整数逆序地输出。
//输入一个正整数 n   保证个位数不是 0
//
//void Reverse_Print(int n)
//{
//	if (n > 0)
//	{
//		printf("%d", n % 10);
//		Reverse_Print(n / 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Reverse_Print(n);
//	return 0;
//}