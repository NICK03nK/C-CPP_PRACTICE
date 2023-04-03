#define _CRT_SECURE_NO_WARNINGS 1

//-----------------------------------------------
//给定一个字符串 s ，找到 它的第一个不重复的字符，并返回它的索引。
//如果不存在，则返回 - 1 。
//示例 1：
//输入 : s = "leetcode"
//输出 : 0
//示例 2 :
//输入 : s = "loveleetcode"
//输出 : 2
//示例 3 :
//输入 : s = "aabb"
//输出 : -1
//
//class Solution {
//public:
//    int firstUniqChar(string s) {
//        int count[26] = { 0 };
//
//        for (int i = 0; i < s.size(); ++i)
//        {
//            count[s[i] - 'a']++;
//        }
//
//        for (int i = 0; i < s.size(); ++i)
//        {
//            if (count[s[i] - 'a'] == 1)
//            {
//                return i;
//            }
//        }
//
//        return -1;
//    }
//};




//-----------------------------------------------
//给定一个字符串 s 和一个整数 k，从字符串开头算起，每计数至 2k 个字符，就反转这 2k 字符中的前 k 个字符。
//如果剩余字符少于 k 个，则将剩余字符全部反转。
//如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
//示例 1：
//输入：s = "abcdefg", k = 2
//输出："bacdfeg"
//示例 2：
//输入：s = "abcd", k = 2
//输出："bacd"
//
//class Solution {
//public:
//    void reStr(const string& rs, int left, int right)
//    {
//        while (left < right)
//        {
//            swap(rs[left], rs[right]);
//            ++left;
//            --right;
//        }
//    }
//
//    string reverseStr(string s, int k) {
//        for (int i = 0; i < s.size(); ++i)
//        {
//            int L = i, R = i;
//            int counti = 1, countR = 1;
//
//            while (i < s.size() && counti < 2 * k)
//            {
//                ++i;
//                if (i < s.size())
//                {
//                    ++counti;
//                }
//            }
//
//            while (countR < k)
//            {
//                ++R;
//                ++countR;
//            }
//
//            if (counti < k)
//            {
//                reStr(s, L, i - 1);
//            }
//            else
//            {
//                reStr(s, L, R);
//            }
//        }
//
//        return s;
//    }
//};




//-----------------------------------------------
//将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 
//数值为 0 或者字符串不是一个合法的数值则返回 0
//数据范围：字符串长度满足 0≤n≤100
//进阶：空间复杂度 O(1)，时间复杂度 O(n)
//注意：
//①字符串中可能出现任意符号，出现除 + / -以外符号时直接输出 0
//②字符串中可能出现 + / -且仅可能出现在字符串首位。
//输入描述：
//输入一个字符串, 包括数字字母符号, 可以为空
//返回值描述：
//如果是合法的数值表达则返回该数字，否则返回0
//
//class Solution {
//public:
//    int StrToInt(string str) {
//        int ret = 0;
//
//        int flag = 1;
//        if (str[0] == '-')
//        {
//            flag = -1;
//        }
//
//        reverse(str.begin(), str.end());
//
//        for (int i = 0; i < str.size(); ++i)
//        {
//            if ((str[i] != '+' && str[i] != '-') && (str[i] < '0' || str[i] > '9'))
//            {
//                return 0;
//            }
//
//            if (str[i] >= '0' && str[i] <= '9')
//            {
//                ret += (str[i] - '0') * (int)pow(10, i);
//            }
//        }
//
//        return flag * ret;
//    }
//};




//-----------------------------------------------
//给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和并同样以字符串形式返回。
//你不能使用任何內建的用于处理大整数的库（比如 BigInteger）， 也不能直接将输入的字符串转换为整数形式。
//示例 1：
//输入：num1 = "11", num2 = "123"
//输出："134"
//示例 2：
//输入：num1 = "456", num2 = "77"
//输出："533"
//示例 3：
//输入：num1 = "0", num2 = "0"
//输出："0"
//
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//        string retStr;
//        int carry = 0;
//
//        while (end1 >= 0 || end2 >= 0)
//        {
//            int val1 = end1 >= 0 ? num1[end1] - '0' : 0;
//            int val2 = end2 >= 0 ? num2[end2] - '0' : 0;
//            
//            int ret = val1 + val2 + carry;
//
//            carry = ret / 10;
//            ret %= 10;
//
//            retStr += ret + '0';
//            --end1;
//            --end2;
//        }
//
//        if (carry == 1)
//        {
//            retStr += '1';
//        }
//
//        reverse(retStr.begin(), retStr.end());
//
//        return retStr;
//    }
//};




//-----------------------------------------------
//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
//示例 1：
//输入：s = ["h", "e", "l", "l", "o"]
//输出：["o", "l", "l", "e", "h"]
//示例 2：
//输入：s = ["H", "a", "n", "n", "a", "h"]
//输出：["h", "a", "n", "n", "a", "H"]
//
//class Solution {
//public:
//    void reverseString(vector<char>& s) {
//        reverse(s.begin(), s.end());
//    }
//};




//-----------------------------------------------
//给定一个字符串 s ，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
//示例 1：
//输入：s = "Let's take LeetCode contest"
//输出："s'teL ekat edoCteeL tsetnoc"
//示例 2:
//输入： s = "God Ding"
//输出："doG gniD"
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    void reStr(string& rs, int left, int right)
//    {
//        while (left < right)
//        {
//            char tmp = rs[left];
//            rs[left] = rs[right];
//            rs[right] = tmp;
//            ++left;
//            --right;
//        }
//    }
//
//    string reverseWords(string s) {
//        int pos = 0;
//        int prePos = 0;
//
//        for (; pos < s.size(); ++pos)
//        {
//            while (pos < s.size() && s[pos] != ' ')
//            {
//                ++pos;
//            }
//
//            reStr(s, prePos, pos - 1);
//
//            prePos = pos + 1;
//        }
//
//        return s;
//    }
//};




//-----------------------------------------------
//给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。
//注意：不能使用任何内置的 BigInteger 库或直接将输入转换为整数。
//示例 1:
//输入: num1 = "2", num2 = "3"
//输出 : "6"
//示例 2 :
//输入 : num1 = "123", num2 = "456"
//输出 : "56088"
//
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//        string retStr;
//        int carry = 0;
//
//        while (end1 >= 0 || end2 >= 0)
//        {
//            int val1 = end1 >= 0 ? num1[end1] - '0' : 0;
//            int val2 = end2 >= 0 ? num2[end2] - '0' : 0;
//
//            int ret = val1 + val2 + carry;
//
//            carry = ret / 10;
//            ret %= 10;
//
//            retStr += (ret + '0');
//            --end1;
//            --end2;
//        }
//
//        if (carry == 1)
//        {
//            retStr += '1';
//        }
//
//        reverse(retStr.begin(), retStr.end());
//
//        return retStr;
//    }
//
//    string multiply(string num1, string num2) {
//        if (num1[0] == '0' || num2[0] == '0')
//        {
//            return "0";
//        }
//        
//        string retStr("0");
//        
//        for (int end1 = num1.size() - 1; end1 >= 0; --end1)
//        {
//            int carry = 0;
//            string tmpStr;
//
//            int tmp = num1.size() - 1 - end1;
//            while (tmp--)
//            {
//                tmpStr += '0';
//            }
//
//            for (int end2 = num2.size() - 1; end2 >= 0; --end2)
//            {
//                int val1 = num1[end1] - '0';
//                int val2 = num2[end2] - '0';
//
//                int ret = val1 * val2 + carry;
//                carry = ret / 10;
//                ret %= 10;
//
//                tmpStr += (ret + '0');
//            }
//
//            if (carry)
//            {
//                tmpStr += (carry + '0');
//            }
//
//            reverse(tmpStr.begin(), tmpStr.end());
//
//            retStr = addStrings(tmpStr, retStr);
//        }
//
//        return retStr;
//    }
//};