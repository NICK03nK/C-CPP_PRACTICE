#define _CRT_SECURE_NO_WARNINGS 1

//-----------------------------------------------
//https://www.nowcoder.com/questionTerminal/18ecd0ecf5ef4fe9ba3f17f8d00d2d66?pos=11&orderByHotValue=1
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	while (1)
//	{
//		if (n == b)
//		{
//			printf("0\n");
//			break;
//		}
//		else if (n < b)
//		{
//			printf("%d\n", abs(a - n) < abs(b - n) ? abs(a - n) : abs(b - n));
//			break;
//		}
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}




//-----------------------------------------------
//https://www.nowcoder.com/questionTerminal/4060ac7e3e404ad1a894ef3e17650423
//
//class Solution {
//public:
//    void replaceSpace(char* str, int length) {
//        int countspace = 0;
//        int i = 0;
//        for (i = 0; i < length; i++)
//        {
//            if (str[i] == ' ')
//            {
//                countspace++;
//            }
//        }
//        int end1 = length - 1;
//        int end2 = length - 1 + countspace * 2;
//        while (end1 != end2)
//        {
//            if (str[end1] != ' ')
//            {
//                str[end2--] = str[end1--];
//            }
//            else
//            {
//                end1--;
//                str[end2--] = '0';
//                str[end2--] = '2';
//                str[end2--] = '%';
//            }
//        }
//    }
//};