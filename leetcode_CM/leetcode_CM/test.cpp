#define _CRT_SECURE_NO_WARNINGS 1

//-----------------------------------------------
//实现一个算法，确定一个字符串 s 的所有字符是否全都不同。
//示例 1：
//输入: s = "leetcode"
//输出: false 
//示例 2：
//输入: s = "abc"
//输出: true
//
//bool isUnique(char* astr) {
//    int count[26] = { 0 };
//
//    while (*astr != '\0')
//    {
//        count[*astr - 'a']++;
//
//        astr++;
//    }
//
//    for (int i = 0; i < 26; i++)
//    {
//        if (count[i] > 1)
//        {
//            return false;
//        }
//    }
//
//    return true;
//}




//-----------------------------------------------
//给定两个字符串 s1 和 s2，请编写一个程序，确定其中一个字符串的字符重新排列后，能否变成另一个字符串。
//示例 1：
//输入 : s1 = "abc", s2 = "bca"
//输出 : true
//示例 2：
//输入 : s1 = "abc", s2 = "bad"
//输出 : false
//
//bool CheckPermutation(char* s1, char* s2) {
//	int count1[127] = { 0 };
//	int count2[127] = { 0 };
//
//	while (*s1 != '\0')
//	{
//		count1[*s1]++;
//		s1++;
//	}
//	while (*s2 != '\0')
//	{
//		count2[*s2]++;
//		s2++;
//	}
//
//	for (int i = 0; i < 127; i++)
//	{
//		if (count1[i] != count2[i])
//		{
//			return false;
//		}
//	}
//
//	return true;
//}




//-----------------------------------------------
//URL化。编写一种方法，将字符串中的空格全部替换为%20。假定该字符串尾部
//有足够的空间存放新增字符，并且知道字符串的“真实”长度。
//示例 1：
//输入："Mr John Smith    ", 13
//输出："Mr%20John%20Smith"
//示例 2：
//输入："               ", 5
//输出："%20%20%20%20%20"
//
//char* replaceSpaces(char* S, int length) {
//    int countSpace = 0;
//
//    for (int i = 0; i < length; i++)
//    {
//        if (S[i] == ' ')
//        {
//            countSpace++;
//        }
//    }
//
//    for (int i = length - 1; i >= 0; i--)
//    {
//        if (S[i] == ' ')
//        {
//            countSpace--;
//
//            S[i + countSpace * 2] = '%';
//            S[i + countSpace * 2 + 1] = '2';
//            S[i + countSpace * 2 + 2] = '0';
//        }
//        else
//        {
//            S[i + countSpace * 2] = S[i];
//
//            if (i == length - 1)
//            {
//                S[i + countSpace * 2 + 1] = '\0';
//            }
//        }
//    }
//
//    return S;
//}




//-----------------------------------------------
//给定一个字符串，编写一个函数判定其是否为某个回文串的排列之一。
//回文串是指正反两个方向都一样的单词或短语。排列是指字母的重新排列。
//回文串不一定是字典当中的单词。
//示例1：
//输入："tactcoa"
//输出：true（排列有"tacocat"、"atcocta"，等等）
//
//bool canPermutePalindrome(char* s) {
//    int count[127] = { 0 };
//
//    for (int i = 0; i < strlen(s); i++)
//    {
//        count[s[i]]++;
//    }
//
//    int flag = 0;
//
//    for (int i = 0; i < 127; i++)
//    {
//        if (count[i] % 2 != 0)
//        {
//            flag++;
//        }
//
//        if (flag > 1)
//        {
//            return false;
//        }
//    }
//
//    return true;
//}




//-----------------------------------------------<***>
//字符串有三种编辑操作:插入一个英文字符、删除一个英文字符或者替换一个英文
//字符。 给定两个字符串，编写一个函数判定它们是否只需要一次(或者零次)编辑。
//示例 1
//输入:
//first = "pale"
//second = "ple"
//输出 : True
//示例 2
//输入:
//first = "pales"
//second = "pal"
//输出 : False
//
//bool oneEditAway(char* first, char* second) {
//    int f = strlen(first);
//    int s = strlen(second);
//
//    if (abs(f - s) > 1)
//    {
//        return false;
//    }
//
//    char* lStr = first;
//    char* sStr = second;
//    if (f < s)
//    {
//        lStr = second;
//        sStr = first;
//    }
//
//    if (abs(f - s) == 1)
//    {
//        int index1 = 0;
//        int index2 = 0;
//
//        while (index1 < f && index2 < s)
//        {
//            if (lStr[index1] == sStr[index2])
//            {
//                index1++;
//                index2++;
//            }
//            else
//            {
//                index1++;
//            }
//
//            if (index1 - index2 > 1)
//            {
//                return false;
//            }
//        }
//    }
//    else if (f - s == 0)
//    {
//        int count = 0;
//        
//        for (int i = 0; i < f; i++)
//        {
//            if (first[i] != second[i])
//            {
//                count++;
//            }
//
//            if (count > 1)
//            {
//                return false;
//            }
//        }
//    }
//    
//    return true;
//}




//-----------------------------------------------
//字符串压缩。利用字符重复出现的次数，编写一种方法，实现基本的字符串压缩功
//能。比如，字符串aabcccccaaa会变为a2b1c5a3。若“压缩”后的字符串没有变短，
//则返回原先的字符串。你可以假设字符串中只包含大小写英文字母（a至z）。
//示例1 :
//输入："aabcccccaaa"
//输出："a2b1c5a3"
//示例2 :
//输入："abbccd"
//输出："abbccd"
//解释："abbccd"压缩后为"a1b2c2d1"，比原字符串长度更长。
//
//char* compressString(char* S) {
//	char* zip = (char*)calloc(75000, sizeof(char));
//	if (zip == NULL)
//	{
//		return NULL;
//	}
//
//	int j = 0;
//	int count = 1;
//	for (int i = 0; S[i] != '\0'; i++)
//	{
//		if (S[i] == S[i + 1])
//		{
//			count++;
//		}
//		else
//		{
//			zip[j++] = S[i];
//
//			sprintf(&zip[j], "%d", count);
//			while (count)
//			{
//				j++;
//				count /= 10;
//			}
//
//			count = 1;
//		}
//	}
//
//	if (strlen(zip) < strlen(S))
//	{
//		return zip;
//	}
//	else
//	{
//		return S;
//	}
//}




//-----------------------------------------------
//给你一幅由 N × N 矩阵表示的图像，其中每个像素的大小为 4 字节。请你设计一种算法，将图像旋转 90 度。
//不占用额外内存空间能否做到？
//示例 1:
//给定 matrix =                    原地旋转输入矩阵，使其变为 : 
//[	                                                [   
//	[1, 2, 3],                                          [7, 4, 1],
//    [1, 2, 3],                                          [8, 5, 2],
//	[4, 5, 6],                                          [9, 6, 3]
//	[7, 8, 9]                                       ]
//]
//示例 2:
//给定 matrix =                    原地旋转输入矩阵，使其变为 :
//[                                                   [
//	[ 5, 1, 9, 11],                                     [15, 13, 2, 5],
//	[2, 4, 8, 10],                                      [14, 3, 4, 1],
//	[13, 3, 6, 7],                                      [12, 6, 8, 9],
//	[15, 14, 12, 16]                                    [16, 7, 10, 11]
//]                                                   ]
//
//void rotate(int** matrix, int matrixSize, int* matrixColSize) {
//	int* new_matrix = (int*)calloc(matrixSize * matrixSize, sizeof(int));
//	if (new_matrix == NULL)
//	{
//		return;
//	}
//
//	int k = 0;
//	for (int j = 0; j < matrixSize; j++)
//	{
//		for (int i = matrixSize - 1; i >= 0; i--)
//		{
//			new_matrix[k++] = matrix[i][j];
//		}
//	}
//
//	k = 0;
//	for (int i = 0; i < matrixSize; i++)
//	{
//		for (int j = 0; j < matrixSize; j++)
//		{
//			matrix[i][j] = new_matrix[k++];
//		}
//	}
//
//	free(new_matrix);
//	new_matrix = NULL;
//}




//-----------------------------------------------
//编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。
//
//void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
//	int x = matrixSize;
//	int y = *matrixColSize;
//
//	int row[x];
//	int col[y];
//	memset(row, 0, sizeof(row));
//	menset(col, 0, sizeof(col));
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if (matrix[i][j] == 0)
//			{
//				row[i] = col[j] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if (row[i] || col[j])
//			{
//				matrix[i][j] = 0;
//			}
//		}
//	}
//}




//-----------------------------------------------
//字符串轮转。给定两个字符串s1和s2，请编写代码检查s2是否为s1
//旋转而成（比如，waterbottle是erbottlewat旋转后的字符串）。
//示例1 :
//输入：s1 = "waterbottle", s2 = "erbottlewat"
//输出：True
//示例2 :
//输入：s1 = "aa", s2 = "aba"
//输出：False
//
//bool isFlipedString(char* s1, char* s2) {
//	if (strlen(s1) != strlen(s2))
//	{
//		return false;
//	}
//
//	char* tmp = (char*)calloc(2 * strlen(s1) + 1, sizeof(char));
//	
//	strcpy(tmp, s1);
//	strcat(tmp, s1);
//
//	if (strstr(tmp, s2))
//	{
//		free(tmp);
//		tmp = NULL;
//
//		return true;
//	}
//	else
//	{
//		free(tmp);
//		tmp = NULL;
//
//		return false;
//	}
//}




//-----------------------------------------------
//编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。
//示例1 :
//输入：[1, 2, 3, 3, 2, 1]
//输出：[1, 2, 3]
//示例2 :
//输入：[1, 1, 1, 1, 2]
//输出：[1, 2]
//
//struct ListNode* removeDuplicateNodes(struct ListNode* head) {
//	if (head == NULL)
//	{
//		return head;
//	}
//
//	struct ListNode* guard = (struct ListNode*)malloc(sizeof(struct ListNode));
//	guard->val = 0;
//	guard->next = NULL;
//
//	struct ListNode* cur1 = head->next;
//
//	struct ListNode* tail = guard;
//	tail->next = head;
//	tail = tail->next;
//	tail->next = NULL;
//
//	struct ListNode* cur2 = NULL;
//
//	while (cur1 != NULL)
//	{
//		cur2 = guard->next;
//
//		int flag = 1;
//		while (cur2 != NULL)
//		{
//			if (cur2->val == cur1->val)
//			{
//				flag = 0;
//				break;
//			}
//
//			cur2 = cur2->next;
//		}
//
//		if (flag)
//		{
//			tail->next = cur1;
//			cur1 = cur1->next;
//			tail = tail->next;
//			tail->next = NULL;
//		}
//		else
//		{
//			cur1 = cur1->next;
//		}
//	}
//
//	head = guard->next;
//
//	free(guard);
//	guard = NULL;
//
//	return head;
//}




//-----------------------------------------------
//实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。
//注意：本题相对原题稍作改动
//示例：
//输入： 1->2->3->4->5 和 k = 2
//输出： 4
//
//int kthToLast(struct ListNode* head, int k) {
//	struct ListNode* first = head;
//	struct ListNode* second = head;
//
//	while (k--)
//	{
//		first = first->next;
//	}
//
//	while (first != NULL)
//	{
//		first = first->next;
//		second = second->next;
//	}
//
//	return second->val;
//}




//-----------------------------------------------
//若链表中的某个节点，既不是链表头节点，也不是链表尾节点，则称其为该链表的「中间节点」。
//假定已知链表的某一个中间节点，请实现一种算法，将该节点从链表中删除。
//例如，传入节点 c（位于单向链表 a->b->c->d->e->f 中），将其删除后，剩余链表为 a->b->d->e->f
//示例：
//输入：节点 5 （位于单向链表 4->5->1->9 中）
//输出：不返回任何数据，从链表中删除传入的节点 5，使链表变为 4->1->9
//
//void deleteNode(struct ListNode* node) {
//	struct ListNode* cur = node;
//	struct ListNode* next = node->next;
//
//	cur->val = next->val;
//	cur->next = next->next;
//	free(next);
//	next = NULL;
//}
//
//tips : 本题可采用假删除(模拟删除)的方式来解决，即用node->next的val覆盖node的val，然后再
//       将node的next指向node->next的next，再free掉node->next，这样就完成了假删除(模拟删除)




//-----------------------------------------------
//给你一个链表的头节点 head 和一个特定值 x ，请你对链表进行分
//隔，使得所有 小于 x 的节点都出现在 大于或等于 x 的节点之前。
//你不需要保留每个分区中各节点的初始相对位置。
//示例 1：
//输入：head = [1, 4, 3, 2, 5, 2], x = 3
//输出：[1, 2, 2, 4, 3, 5]
//
//struct ListNode* partition(struct ListNode* head, int x) {
//	struct ListNode* greaterGuard = (struct ListNode*)malloc(sizeof(struct ListNode));
//	greaterGuard->val = 0;
//	greaterGuard->next = NULL;
//
//	struct ListNode* lessGuard = (struct ListNode*)malloc(sizeof(struct ListNode));
//	lessGuard->val = 0;
//	lessGuard->next = NULL;
//
//	struct ListNode* greaterTail = greaterGuard;
//	struct ListNode* lessTail = lessGuard;
//	struct ListNode* cur = head;
//
//	while (cur != NULL)
//	{
//		if (cur->val < x)
//		{
//			lessTail->next = cur;
//			lessTail = lessTail->next;
//		}
//		else
//		{
//			greaterTail->next = cur;
//			greaterTail = greaterTail->next;
//		}
//
//		cur = cur->next;
//	}
//
//	lessTail->next = greaterGuard->next;
//	greaterTail->next = NULL;
//
//	head = lessGuard->next;
//
//	free(greaterGuard);
//	greaterGuard = NULL;
//	free(lessGuard);
//	lessGuard = NULL;
//
//	return head;
//}
//
//tips : 本题的解题思路可参考我的博客中的第六个标题——链表分割
//       链接 -> https://blog.csdn.net/m0_61064157/article/details/126147870?spm=1001.2014.3001.5502




//-----------------------------------------------
//给定两个用链表表示的整数，每个节点包含一个数位。
//这些数位是反向存放的，也就是个位排在链表首部。
//编写函数对这两个整数求和，并用链表形式返回结果。
//示例：
//输入：(7 -> 1 -> 6) + (5 -> 9 -> 2)，即617 + 295
//输出：2 -> 1 -> 9，即912
//进阶：思考一下，假设这些数位是正向存放的，又该如何解决呢 ?
//示例：
//输入：(6 -> 1 -> 7) + (2 -> 9 -> 5)，即617 + 295
//输出：9 -> 1 -> 2，即912
//
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//	struct ListNode* cur1 = l1;
//	struct ListNode* cur2 = l2;
//
//	while (cur1 && cur2)
//	{
//		if (cur1->val > 9)
//		{
//			cur1->val %= 10;
//
//			if (cur1->next == NULL)
//			{
//				struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
//				node->val = 0;
//				node->next = NULL;
//
//				cur1->next = node;
//			}
//			cur1->next->val++;
//		}
//
//		if (cur1->val + cur2->val > 9)
//		{
//			cur1->val = (cur1->val + cur2->val) % 10;
//
//			if (cur1->next == NULL)
//			{
//				struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
//				node->val = 0;
//				node->next = NULL;
//
//				cur1->next = node;
//			}
//			cur1->next->val++;
//		}
//		else
//		{
//			cur1->val = cur1->val + cur2->val;
//		}
//
//		if (cur1->next == NULL && cur2->next)
//		{
//			cur1->next = cur2->next;
//			break;
//		}
//
//		cur1 = cur1->next;
//		cur2 = cur2->next;
//	}
//
//	while (cur1 && cur1->val > 9)
//	{
//		cur1->val %= 10;
//
//		if (cur1->next == NULL)
//		{
//			struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
//			node->val = 0;
//			node->next = NULL;
//
//			cur1->next = node;
//		}
//		cur1->next->val++;
//
//		cur1 = cur1->next;
//	}
//
//	return l1;
//}
//
//tips : 从第一个结点开始将结点的val相加，将相加的结果覆盖在第一个链表中，判断相加的
//       结果是否大于9，大于则进位。在每次相加val前先判断链表1上结点的val是否大于9，
//       大于则进位，操作完此步骤后再进行相加运算。(其他具体细节结合代码分析)




//-----------------------------------------------
//编写一个函数，检查输入的链表是否是回文的。
//示例 1：
//输入： 1->2
//输出： false
//示例 2：
//输入： 1->2->2->1
//输出： true
//
//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* cur = head;
//    struct ListNode* prev = NULL;
//    struct ListNode* next = NULL;
//    while (cur)
//    {
//        next = cur->next;
//        cur->next = prev;
//        prev = cur;
//        cur = next;
//    }
//    return prev;
//}
//
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}
//
//bool isPalindrome(struct ListNode* head) {
//    struct ListNode* mid = middleNode(head);
//    struct ListNode* rmid = reverseList(mid);
//
//    while (head && rmid)
//    {
//        if (head->val != rmid->val)
//        {
//            return false;
//        }
//
//        head = head->next;
//        rmid = rmid->next;
//    }
//
//    return true;
//}
//
//tips : 本题的解题思路可参考我的博客中的第七个标题——链表的回文结构
//       链接 -> https://blog.csdn.net/m0_61064157/article/details/126147870?spm=1001.2014.3001.5502




//-----------------------------------------------
//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个
//单链表相交的起始节点。如果两个链表没有交点，返回 null 。
//
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//	if (headA == NULL || headB == NULL)
//	{
//		return NULL;
//	}
//
//	int lenA = 1;
//	int lenB = 1;
//
//	struct ListNode* curA = headA;
//	struct ListNode* curB = headB;
//
//	while (curA->next)
//	{
//		curA = curA->next;
//		lenA++;
//	}
//	while (curB->next)
//	{
//		curB = curB->next;
//		lenB++;
//	}
//
//	if (curA != curB)
//	{
//		return NULL;
//	}
//
//	struct ListNode* longList = headA;
//	struct ListNode* shortList = headB;
//
//	if (lenA < lenB)
//	{
//		longList = headB;
//		shortList = headA;
//	}
//
//	int gap = abs(lenA - lenB);
//
//	while (gap--)
//	{
//		longList = longList->next;
//	}
//
//	while (longList != shortList)
//	{
//		longList = longList->next;
//		shortList = shortList->next;
//	}
//
//	return longList;
//}
//
//tips : 本题的解题思路可参考我的博客中的第八个标题——相交链表
//       链接 -> https://blog.csdn.net/m0_61064157/article/details/126147870?spm=1001.2014.3001.5502




//-----------------------------------------------
//给定一个链表，如果它是有环链表，实现一个算法返回环路的开头节点。若环不存在，请返回 null。
//如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定
//链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 
//如果 pos 是 - 1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
//
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//	if (headA == NULL || headB == NULL)
//	{
//		return NULL;
//	}
//
//	int lenA = 1;
//	int lenB = 1;
//
//	struct ListNode* curA = headA;
//	struct ListNode* curB = headB;
//
//	while (curA->next)
//	{
//		curA = curA->next;
//		lenA++;
//	}
//	while (curB->next)
//	{
//		curB = curB->next;
//		lenB++;
//	}
//
//	if (curA != curB)
//	{
//		return NULL;
//	}
//
//	struct ListNode* longList = headA;
//	struct ListNode* shortList = headB;
//
//	if (lenA < lenB)
//	{
//		longList = headB;
//		shortList = headA;
//	}
//
//	int gap = abs(lenA - lenB);
//
//	while (gap--)
//	{
//		longList = longList->next;
//	}
//
//	while (longList != shortList)
//	{
//		longList = longList->next;
//		shortList = shortList->next;
//	}
//
//	return longList;
//}
//
//struct ListNode* detectCycle(struct ListNode* head) {
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//
//		if (fast == slow)
//		{
//			struct ListNode* meet = fast;
//			struct ListNode* next = meet->next;
//
//			meet->next = NULL;
//
//			struct ListNode* entryNode = getIntersectionNode(head, next);
//
//			meet->next = next;
//
//			return entryNode;
//		}
//	}
//
//	return NULL;
//}
//
//tips : 本题的解题思路可参考我的博客中的第十个标题——判断链表是否带环 + 返回入环的第一个结点
//       链接 -> https://blog.csdn.net/m0_61064157/article/details/126147870?spm=1001.2014.3001.5502




//-----------------------------------------------
//三合一。描述如何只用一个数组来实现三个栈。
//你应该实现push(stackNum, value)、pop(stackNum)、isEmpty(stackNum)、peek(stackNum)方法。
//stackNum表示栈下标，value表示压入的值。
//构造函数会传入一个stackSize参数，代表每个栈的大小。
//
//示例1 :
//输入：
//["TripleInOne", "push", "push", "pop", "pop", "pop", "isEmpty"]
//[[1], [0, 1], [0, 2], [0], [0], [0], [0]]
//输出：
//[null, null, null, 1, -1, -1, true]
//说明：当栈为空时`pop, peek`返回 - 1，当栈满时`push`不压入元素。
//
//示例2 :
//输入：
//["TripleInOne", "push", "push", "push", "pop", "pop", "pop", "peek"]
//[[2], [0, 1], [0, 2], [0, 3], [0], [0], [0], [0]]
//输出：
//[null, null, null, null, 2, 1, -1, -1]
//
//typedef struct {
//	int* data;
//	int top[3];
//	int capacity;
//} TripleInOne;
//
//
//TripleInOne* tripleInOneCreate(int stackSize) {
//	TripleInOne* obj = (TripleInOne*)malloc(sizeof(TripleInOne));
//	if (obj == NULL)
//	{
//		return NULL;
//	}
//
//	obj->data = (int*)malloc(3 * stackSize * sizeof(int));
//	obj->top[0] = 0;
//	obj->top[1] = 1 * stackSize;
//	obj->top[2] = 2 * stackSize;
//	obj->capacity = stackSize;
//
//	return obj;
//}
//
//bool tripleInOneIsEmpty(TripleInOne* obj, int stackNum) {
//	if (obj->top[stackNum] == stackNum * obj->capacity)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//void tripleInOnePush(TripleInOne* obj, int stackNum, int value) {
//	if (obj->top[stackNum] < stackNum * obj->capacity + obj->capacity)
//	{
//		obj->data[obj->top[stackNum]] = value;
//		obj->top[stackNum]++;
//	}
//}
//
//int tripleInOnePop(TripleInOne* obj, int stackNum) {
//	if (tripleInOneIsEmpty(obj, stackNum))
//	{
//		return -1;
//	}
//
//	int ret = obj->data[obj->top[stackNum] - 1];
//	obj->top[stackNum]--;
//
//	return ret;
//}
//
//int tripleInOnePeek(TripleInOne* obj, int stackNum) {
//	if (tripleInOneIsEmpty(obj, stackNum))
//	{
//		return -1;
//	}
//
//	return obj->data[obj->top[stackNum] - 1];
//}
//
//void tripleInOneFree(TripleInOne* obj) {
//	free(obj->data);
//	obj->data = NULL;
//	free(obj);
//	obj = NULL;
//}
//
//tips : 本题最主要的问题是读懂题意，在一个数组上分三份，每一份代表一个栈，本题的一个核心问
//       题是创建三个top来分别对三个栈判空判满以及进行push和pop操作，以上插口函数中存在的一
//	     些微小细节可通过画图来分析(画图后就一目了然了)。本题还有个卡了很久的问题，就是之前
//	     一直误以为stackSize是每个栈的字节个数(即整个栈的大小)，而实际上是每个栈的容量大
//	     小(即capacity)，所有在给obj->data开辟空间时要乘上sizeof(int)。




//-----------------------------------------------
//请设计一个栈，除了常规栈支持的pop与push函数以外，还支持min函数，该函数
//返回栈元素中的最小值。执行push、pop和min操作的时间复杂度必须为O(1)。
//示例：
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.getMin();   -- > 返回 - 3.
//minStack.pop();
//minStack.top();      -- > 返回 0.
//minStack.getMin();   -- > 返回 - 2.
//
//typedef struct {
//	int* data;
//	int* mindata;
//	int top;
//	int capacity;
//} MinStack;
//
//MinStack* minStackCreate() {
//	MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
//	if (obj == NULL)
//	{
//		return NULL;
//	}
//
//	obj->data = (int*)malloc(4 * sizeof(int));
//	obj->mindata = (int*)malloc(4 * sizeof(int));
//	obj->top = 0;
//	obj->capacity = 4;
//
//	return obj;
//}
//
//bool minStackIsEmpty(MinStack* obj)
//{
//	return obj->top == 0;
//}
//
//void minStackPush(MinStack* obj, int x) {
//	if (obj->top == obj->capacity)
//	{
//		MinStack* tmp1 = (MinStack*)realloc(obj->data, 2 * obj->capacity * sizeof(int));
//		if (tmp1 == NULL)
//		{
//			return;
//		}
//		MinStack* tmp2 = (MinStack*)realloc(obj->mindata, 2 * obj->capacity * sizeof(int));
//		if (tmp2 == NULL)
//		{
//			return;
//		}
//
//		obj->data = tmp1;
//		obj->mindata = tmp2;
//		obj->capacity *= 2;
//	}
//
//	obj->data[obj->top] = x;
//
//	if (obj->top == 0)
//	{
//		obj->mindata[obj->top] = obj->data[obj->top];
//	}
//	else
//	{
//		if (obj->data[obj->top] < obj->mindata[obj->top - 1])
//		{
//			obj->mindata[obj->top] = obj->data[obj->top];
//		}
//		else
//		{
//			obj->mindata[obj->top] = obj->mindata[obj->top - 1];
//		}
//	}
//
//	obj->top++;
//}
//
//void minStackPop(MinStack* obj) {
//	if (!minStackIsEmpty(obj))
//	{
//		obj->top--;
//	}
//}
//
//int minStackTop(MinStack* obj) {
//	if (!minStackIsEmpty(obj))
//	{
//		return obj->data[obj->top - 1];
//	}
//
//	return 0;
//}
//
//int minStackGetMin(MinStack* obj) {
//	return obj->mindata[obj->top - 1];
//}
//
//void minStackFree(MinStack* obj) {
//	free(obj->data);
//	obj->data = NULL;
//	free(obj->mindata);
//	obj->mindata = NULL;
//	free(obj);
//	obj = NULL;
//}
//
//tips : 本题需要注意的点是，将栈顶的数据pop掉后，栈中最小的数据也可能会更新。本题借助一个辅助栈
//       来实现更新栈中最小元素这一操作。将数据x压入data栈中，若x小于mindata的栈顶数据，则将x也压
//	     入mindata栈中；若x大于mindata的栈顶数据，则将mindata的栈顶数据值再次压入mindata栈中，这
//	     样一来，就可以实现对data栈执行pop操作时，栈中的最小值也随之更新(可参考同步上传的动图，帮助理解)。




//-----------------------------------------------
//堆盘子。设想有一堆盘子，堆太高可能会倒下来。因此，在现实生活中，盘子堆到一定高度时，
//我们就会另外堆一堆盘子。请实现数据结构SetOfStacks，模拟这种行为。SetOfStacks应该由
//多个栈组成，并且在前一个栈填满时新建一个栈。此外，SetOfStacks.push()和SetOfStacks.pop()应
//该与普通栈的操作方法相同（也就是说，pop()返回的值，应该跟只有一个栈时的情况一样）。
//进阶：实现一个popAt(int index)方法，根据指定的子栈，执行pop操作。
//当某个栈为空时，应当删除该栈。当栈中没有元素或不存在该栈时，pop，popAt 应返回 - 1.
//
//typedef struct PlateNode
//{
//	int data;
//	struct PlateNode* next;
//}PLNode;
//
//typedef struct {
//	PLNode** plList;
//	int plNum;
//	int capacity;
//} StackOfPlates;
//
//StackOfPlates* stackOfPlatesCreate(int cap) {
//	StackOfPlates* obj = (StackOfPlates*)malloc(sizeof(StackOfPlates));
//	if (obj == NULL)
//	{
//		return NULL;
//	}
//
//	obj->plNum = 0;
//	obj->plList = (PLNode**)malloc((obj->plNum + 1) * sizeof(PLNode*));
//	obj->plList[obj->plNum] = NULL;
//	obj->capacity = cap;
//
//	return obj;
//}
//
//PLNode* BuyNode(int val)
//{
//	PLNode* newnode = (PLNode*)malloc(sizeof(PLNode));
//	if (newnode == NULL)
//	{
//		return NULL;
//	}
//
//	newnode->data = val;
//	newnode->next = NULL;
//
//	return newnode;
//}
//
//void stackOfPlatesPush(StackOfPlates* obj, int val) {
//	if (obj->capacity == 0)
//	{
//		return;
//	}
//
//	if (obj->plList[obj->plNum] != NULL && obj->plList[obj->plNum]->data == obj->capacity)
//	{
//		obj->plNum++;
//
//		PLNode** tmp = (PLNode**)realloc(obj->plList, (obj->plNum + 1) * sizeof(PLNode));
//		if (tmp == NULL)
//		{
//			return;
//		}
//
//		obj->plList = tmp;
//		obj->plList[obj->plNum] = NULL;
//	}
//
//	if (obj->plList[obj->plNum] == NULL)
//	{
//		obj->plList[obj->plNum] = BuyNode(0);
//	}
//
//	PLNode* newnode = BuyNode(val);
//	newnode->next = obj->plList[obj->plNum]->next;
//	obj->plList[obj->plNum]->next = newnode;
//
//	obj->plList[obj->plNum]->data++;
//}
//
//int stackOfPlatesPop(StackOfPlates* obj) {
//	if (obj->capacity == 0)
//	{
//		return -1;
//	}
//
//	if (obj->plNum == 0 && obj->plList[obj->plNum] == NULL)
//	{
//		return -1;
//	}
//
//	PLNode* popNode = obj->plList[obj->plNum]->next;
//
//	int ret = popNode->data;
//
//	obj->plList[obj->plNum]->next = popNode->next;
//
//	free(popNode);
//	popNode = NULL;
//
//	obj->plList[obj->plNum]->data--;
//
//	if (obj->plList[obj->plNum]->data == 0)
//	{
//		free(obj->plList[obj->plNum]);
//		obj->plList[obj->plNum] = NULL;
//
//		if (obj->plNum > 0)
//		{
//			obj->plNum--;
//		}
//	}
//
//	return ret;
//}
//
//int stackOfPlatesPopAt(StackOfPlates* obj, int index) {
//	if (obj->capacity == 0)
//	{
//		return -1;
//	}
//
//	if (index > obj->plNum)
//	{
//		return -1;
//	}
//
//	if (index == obj->plNum)
//	{
//		return stackOfPlatesPop(obj);
//	}
//
//	PLNode* popNode = obj->plList[index]->next;
//
//	int ret = popNode->data;
//
//	obj->plList[index]->next = popNode->next;
//
//	free(popNode);
//	popNode = NULL;
//
//	obj->plList[index]->data--;
//
//	if (obj->plList[index]->data == 0)
//	{
//		free(obj->plList[index]);
//		
//		for (int i = index; i < obj->plNum; i++)
//		{
//			obj->plList[i] = obj->plList[i + 1];
//		}
//
//		obj->plList[obj->plNum] = NULL;
//
//		obj->plNum--;
//	}
//
//	return ret;
//}
//
//void stackOfPlatesFree(StackOfPlates* obj) {
//	while (obj->plList[0] != NULL)
//	{
//		stackOfPlatesPopAt(obj, 0);
//	}
//}
//
//tips : 本题用动态开辟的指针数组加单向链表结合来解决，代码实现中有些细节较为复杂，
//       在此不做详细总结(可查看同步上传的函数接口分析图，帮助理解)。




//-----------------------------------------------
//实现一个MyQueue类，该类用两个栈来实现一个队列。
//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//#define InitCap 4
//
//typedef int STDataType;
//
//typedef struct Stack
//{
//	STDataType* data;
//	int top;
//	int capacity;
//}ST;
//
//void InitST(ST* ps);
//
//void DestroyST(ST* ps);
//
//void STPush(ST* ps, STDataType x);
//
//void STPop(ST* ps);
//
//bool IsSTEmpty(ST* ps);
//
//STDataType STTop(ST* ps);
//
//int STSize(ST* ps);
//
//void InitST(ST* ps)
//{
//	assert(ps);
//	ps->data = (STDataType*)malloc(InitCap * sizeof(STDataType));
//	if (ps->data == NULL)
//	{
//		perror("InitST fail");
//		exit(-1);
//	}
//	ps->top = 0;
//	ps->capacity = InitCap;
//}
//
//void DestroyST(ST* ps)
//{
//	assert(ps);
//	free(ps->data);
//	ps->data = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
//void STPush(ST* ps, STDataType x)
//{
//	assert(ps);
//	if (ps->top == ps->capacity)
//	{
//		ST* tmp = (ST*)realloc(ps->data, 2 * ps->capacity * sizeof(ST));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			exit(-1);
//		}
//		ps->data = tmp;
//		ps->capacity *= 2;
//	}
//	ps->data[ps->top] = x;
//	ps->top++;
//}
//
//void STPop(ST* ps)
//{
//	assert(ps);
//	assert(!IsSTEmpty(ps));
//	ps->top--;
//}
//
//bool IsSTEmpty(ST* ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
//
//STDataType STTop(ST* ps)
//{
//	assert(ps);
//	assert(!IsSTEmpty(ps));
//	return ps->data[ps->top - 1];
//}
//
//int STSize(ST* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//
//typedef struct {
//	ST pushST;
//	ST popST;
//} MyQueue;
//
///** Initialize your data structure here. */
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//
//	InitST(&obj->pushST);
//	InitST(&obj->popST);
//
//	return obj;
//}
//
///** Push element x to the back of queue. */
//void myQueuePush(MyQueue* obj, int x) {
//	STPush(&obj->pushST, x);
//}
//
///** Removes the element from in front of queue and returns that element. */
//int myQueuePop(MyQueue* obj) {
//	if (IsSTEmpty(&obj->popST))
//	{
//		while (!IsSTEmpty(&obj->pushST))
//		{
//			STPush(&obj->popST, STTop(&obj->pushST));
//			STPop(&obj->pushST);
//		}
//	}
//
//	int top = STTop(&obj->popST);
//	STPop(&obj->popST);
//
//	return top;
//}
//
///** Get the front element. */
//int myQueuePeek(MyQueue* obj) {
//	if (IsSTEmpty(&obj->popST))
//	{
//		while (!IsSTEmpty(&obj->pushST))
//		{
//			STPush(&obj->popST, STTop(&obj->pushST));
//			STPop(&obj->pushST);
//		}
//	}
//
//	return STTop(&obj->popST);
//}
//
///** Returns whether the queue is empty. */
//bool myQueueEmpty(MyQueue* obj) {
//	return IsSTEmpty(&obj->pushST) && IsSTEmpty(&obj->popST);
//}
//
//void myQueueFree(MyQueue* obj) {
//	DestroyST(&obj->pushST);
//	DestroyST(&obj->popST);
//
//	free(obj);
//	obj = NULL;
//}
//
//tips : 本题可用两个栈来实现队列，一个pushST栈一个popST栈。入队操作就将数据压入pushST栈中
//       出队操作首先要判断popST栈中是否为空，若popST栈为空则将pushST栈中的元素从栈顶依次
//	     全部压入popST栈中(从pushST栈中取数据压入popST栈中要注意将pushST栈中取完的数据从
//	     pushST栈中pop掉)，若popST栈不为空则直接返回popST栈的栈顶元素，同时pop掉栈顶元素。
//	     借助pushST栈和popST栈可以实现队列的FIFO性质。




//-----------------------------------------------
//栈排序。 编写程序，对栈进行排序使最小元素位于栈顶。最多只能使用一个其他的临时栈存放数据，
//但不得将元素复制到别的数据结构（如数组）中。该栈支持如下操作：push、pop、peek 和 isEmpty。
//当栈为空时，peek 返回 - 1。
//
//typedef struct {
//	int* st1;
//	int* st2;
//	int top1;
//	int top2;
//	int capacity;
//} SortedStack;
//
//SortedStack* sortedStackCreate() {
//	SortedStack* obj = (SortedStack*)malloc(sizeof(SortedStack));
//	if (obj == NULL)
//	{
//		return NULL;
//	}
//
//	obj->st1 = (int*)malloc(4 * sizeof(int));
//	if (obj->st1 == NULL)
//	{
//		return NULL;
//	}
//	obj->st2 = (int*)malloc(4 * sizeof(int));
//	if (obj->st2 == NULL)
//	{
//		return NULL;
//	}
//
//	obj->top1 = 0;
//	obj->top2 = 0;
//	obj->capacity = 4;
//
//	return obj;
//}
//
//void sortedStackPush(SortedStack* obj, int val) {
//	if (obj->top1 == obj->capacity)
//	{
//		int* tmp1 = (int*)realloc(obj->st1, 2 * obj->capacity * sizeof(int));
//		if (tmp1 == NULL)
//		{
//			return;
//		}
//		obj->st1 = tmp1;
//
//		int* tmp2 = (int*)realloc(obj->st2, 2 * obj->capacity * sizeof(int));
//		if (tmp2 == NULL)
//		{
//			return;
//		}
//		obj->st2 = tmp2;
//
//		obj->capacity *= 2;
//	}
//
//	if (obj->top1 == 0)
//	{
//		obj->st1[obj->top1] = val;
//		obj->top1++;
//	}
//	else
//	{
//		while (obj->top1 > 0 && val > obj->st1[obj->top1 - 1])
//		{
//			obj->st2[obj->top2] = obj->st1[obj->top1 - 1];
//			obj->top1--;
//			obj->top2++;
//		}
//		obj->st1[obj->top1] = val;
//		obj->top1++;
//
//		while (obj->top2 > 0)
//		{
//			obj->st1[obj->top1] = obj->st2[obj->top2 - 1];
//			obj->top1++;
//			obj->top2--;
//		}
//	}
//}
//
//bool sortedStackIsEmpty(SortedStack* obj) {
//	return obj->top1 == 0;
//}
//
//void sortedStackPop(SortedStack* obj) {
//	if (!sortedStackIsEmpty(obj))
//	{
//		obj->top1--;
//	}
//}
//
//int sortedStackPeek(SortedStack* obj) {
//	if (!sortedStackIsEmpty(obj))
//	{
//		return obj->st1[obj->top1 - 1];
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//void sortedStackFree(SortedStack* obj) {
//	free(obj->st1);
//	obj->st1 = NULL;
//	free(obj->st2);
//	obj->st2 = NULL;
//
//	free(obj);
//	obj = NULL;
//}
//
//tips : 本题可利用一个插入栈(st1)和一个辅助栈(st2)再结合直接插入排序的思想实现。将x压入st1栈中
//       若x小于st1栈的栈顶数据，则直接入栈；若x大于st1栈的栈顶数据，则将st1栈中小于x的数据从栈
//	     顶依次压入st2栈中(压一个数据两边栈的top也随之改变)，然后再将x压入st1栈中，再将st2栈中的
//	     数据压回st1栈中，以此实现栈排序。




//-----------------------------------------------
//动物收容所。有家动物收容所只收容狗与猫，且严格遵守“先进先出”的原则。在收养该收容所的动物时，
//收养人只能收养所有动物中“最老”（由其进入收容所的时间长短而定）的动物，或者可以挑选猫或狗
//（同时必须收养此类动物中“最老”的）。换言之，收养人不能自由挑选想收养的对象。请创建适用于这
//个系统的数据结构，实现各种操作方法，比如enqueue、dequeueAny、dequeueDog和dequeueCat。
//enqueue方法有一个animal参数，animal[0]代表动物编号，animal[1]代表动物种类，其中 0 代表猫，1 代表狗。
//dequeue * 方法返回一个列表[动物编号, 动物种类]，若没有可以收养的动物，则返回[-1, -1]。
//
//typedef struct AnimalNode
//{
//	int num;
//	int species;
//	struct AnimalNode* next;
//}AnimalNode;
//
//typedef struct {
//	AnimalNode* headC;
//	AnimalNode* tailC;
//	AnimalNode* headD;
//	AnimalNode* tailD;
//	int sizeC;
//	int sizeD;
//} AnimalShelf;
//
//AnimalNode* BuyNode(int* animal)
//{
//	AnimalNode* newnode = (AnimalNode*)malloc(sizeof(AnimalNode));
//	if (newnode == NULL)
//	{
//		return NULL;
//	}
//
//	newnode->num = animal[0];
//	newnode->species = animal[1];
//	newnode->next = NULL;
//
//	return newnode;
//}
//
//AnimalShelf* animalShelfCreate() {
//	AnimalShelf* obj = (AnimalShelf*)malloc(sizeof(AnimalShelf));
//	if (obj == NULL)
//	{
//		return NULL;
//	}
//
//	obj->headC = (AnimalNode*)malloc(sizeof(AnimalNode));
//	if (obj->headC == NULL)
//	{
//		return NULL;
//	}
//	obj->tailC = obj->headC;
//	obj->tailC->next = NULL;
//
//	obj->headD = (AnimalNode*)malloc(sizeof(AnimalNode));
//	if (obj->headD == NULL)
//	{
//		return NULL;
//	}
//	obj->tailD = obj->headD;
//	obj->tailD->next = NULL;
//
//	obj->sizeC = obj->sizeD = 0;
//
//	return obj;
//}
//
//void animalShelfEnqueue(AnimalShelf* obj, int* animal, int animalSize) {
//	AnimalNode* newnode = BuyNode(animal);
//
//	if (newnode->species == 0)
//	{
//		newnode->next = obj->tailC->next;
//		obj->tailC->next = newnode;
//
//		obj->tailC = obj->tailC->next;
//
//		obj->sizeC++;
//	}
//	else
//	{
//		newnode->next = obj->tailD->next;
//		obj->tailD->next = newnode;
//
//		obj->tailD = obj->tailD->next;
//
//		obj->sizeD++;
//	}
//}
//
//int* animalShelfDequeueAny(AnimalShelf* obj, int* retSize) {
//	int* animal = (int*)malloc(2 * sizeof(int));
//	if (animal == NULL)
//	{
//		return NULL;
//	}
//
//	if (obj->sizeC + obj->sizeD == 0)
//	{
//		animal[0] = animal[1] = -1;
//
//		*retSize = 2;
//		return animal;
//	}
//
//	int flag = -1;
//
//	AnimalNode* delNode = NULL;
//
//	if (obj->headC->next != NULL)
//	{
//		delNode = obj->headC->next;
//
//		flag = 0;
//	}
//	else
//	{
//		delNode = obj->headD->next;
//
//		flag = 1;
//	}
//
//	if (obj->headC->next != NULL && obj->headD->next != NULL 
//		&& obj->headD->next->num < obj->headC->next->num)
//	{
//		delNode = obj->headD->next;
//
//		flag = 1;
//	}
//
//	animal[0] = delNode->num;
//	animal[1] = delNode->species;
//
//	if (flag == 0)
//	{
//		obj->headC->next = delNode->next;
//	}
//	else if (flag == 1)
//	{
//		obj->headD->next = delNode->next;
//	}
//
//	free(delNode);
//	delNode = NULL;
//
//	if (animal[1] == 0)
//	{
//		obj->sizeC--;
//
//		if (obj->sizeC == 0)
//		{
//			obj->tailC = obj->headC;
//		}
//	}
//	else
//	{
//		obj->sizeD--;
//
//		if (obj->sizeD == 0)
//		{
//			obj->tailD = obj->headD;
//		}
//	}
//
//	*retSize = 2;
//	return animal;
//}
//
//int* animalShelfDequeueDog(AnimalShelf* obj, int* retSize) {
//	int* animal = (int*)malloc(2 * sizeof(int));
//	if (animal == NULL)
//	{
//		return NULL;
//	}
//
//	if (obj->sizeD == 0)
//	{
//		animal[0] = animal[1] = -1;
//
//		*retSize = 2;
//		return animal;
//	}
//
//	AnimalNode* delNode = obj->headD->next;
//
//	animal[0] = delNode->num;
//	animal[1] = delNode->species;
//
//	obj->headD->next = delNode->next;
//
//	free(delNode);
//	delNode = NULL;
//
//	obj->sizeD--;
//
//	if (obj->sizeD == 0)
//	{
//		obj->tailD = obj->headD;
//	}
//
//	*retSize = 2;
//	return animal;
//}
//
//int* animalShelfDequeueCat(AnimalShelf* obj, int* retSize) {
//	int* animal = (int*)malloc(2 * sizeof(int));
//	if (animal == NULL)
//	{
//		return NULL;
//	}
//
//	if (obj->sizeC == 0)
//	{
//		animal[0] = animal[1] = -1;
//
//		*retSize = 2;
//		return animal;
//	}
//
//	AnimalNode* delNode = obj->headC->next;
//
//	animal[0] = delNode->num;
//	animal[1] = delNode->species;
//
//	obj->headC->next = delNode->next;
//
//	free(delNode);
//	delNode = NULL;
//
//	obj->sizeC--;
//
//	if (obj->sizeC == 0)
//	{
//		obj->tailC = obj->headC;
//	}
//
//	*retSize = 2;
//	return animal;
//}
//
//void popCat(AnimalShelf* obj)
//{
//	AnimalNode* delNode = obj->headC->next;
//
//	obj->headC->next = delNode->next;
//
//	free(delNode);
//	delNode = NULL;
//
//	obj->sizeC--;
//
//	if (obj->sizeC == 0)
//	{
//		obj->tailC = obj->headC;
//	}
//}
//
//void popDog(AnimalShelf* obj)
//{
//	AnimalNode* delNode = obj->headD->next;
//
//	obj->headD->next = delNode->next;
//
//	free(delNode);
//	delNode = NULL;
//
//	obj->sizeD--;
//
//	if (obj->sizeD == 0)
//	{
//		obj->tailD = obj->headD;
//	}
//}
//
//void animalShelfFree(AnimalShelf* obj) {
//	while (obj->sizeC != 0)
//	{
//		popCat(obj);
//	}
//
//	while (obj->sizeD != 0)
//	{
//		popDog(obj);
//	}
//
//	free(obj->headC);
//	obj->headC = obj->tailC = NULL;
//	free(obj->headD);
//	obj->headD = obj->tailD = NULL;
//
//	free(obj);
//	obj = NULL;
//}
//
//tips : 本题解题思路不难，代码细节很容易出错。解题思路：采用双链表实现，一个cat链表一个dog链表。通过链表
//       的头删来实现FIFO性质，当出队的是any时，则需要先比较cat链表的头结点和dog链表的头结点的num，num小
//	     的那个结点先出队。思路比较简单易理解，但一定要注意代码中对空指针的判断！！！还有注意headC，tailC
//	     headD，tailD两两之间的地址关系，注意判断headC->next和headD->next是否为NULL这才是代码实现的卡点(可
//	     能是实现的太复杂了)。




//-----------------------------------------------
//实现一个函数，检查二叉树是否平衡。在这个问题中，平衡树的定义如下：
//任意一个节点，其两棵子树的高度差不超过 1。
//
//int treeHight(struct TreeNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//
//	int leftH = treeHight(root->left);
//	int rightH = treeHight(root->right);
//
//	return leftH > rightH ? leftH + 1 : rightH + 1;
//}
//
//bool isBalanced(struct TreeNode* root) {
//	if (root == NULL)
//	{
//		return true;
//	}
//
//	int leftH = treeHight(root->left);
//	int rightH = treeHight(root->right);
//
//	if (abs(leftH - rightH) > 1)
//	{
//		return false;
//	}
//
//	return isBalanced(root->left) && isBalanced(root->right);
//}
//
//tips : 本题的切入点就是判断一颗二叉树中任意一个结点的左右子树高度差是否小于1，小于1则平衡，
//       大于1则不平衡。可以先实现一个求树的高度的函数，再遍历该二叉树的每一个结点，判断当前
//	     结点的左右子树的高度差是否小于1(注意空树也可以认为是一颗平衡二叉树)。




//-----------------------------------------------
//检查子树。你有两棵非常大的二叉树：T1，有几万个节点；T2，有几万个节点。设计一个算法，
//判断 T2 是否为 T1 的子树。如果 T1 有这么一个节点 n，其子树与 T2 一模一样，则 T2 为
//T1 的子树，也就是说，从节点 n 处把树砍断，得到的树与 T2 完全相同。
//示例1 :
//输入：t1 = [1, 2, 3], t2 = [2]
//输出：true
//示例2 :
//输入：t1 = [1, null, 2, 4], t2 = [3, 2]
//输出：false
//
//bool isSameTree(struct TreeNode* r1, struct TreeNode* r2)
//{
//	if (r1 == NULL && r2 == NULL)
//	{
//		return true;
//	}
//
//	if (r1 == NULL || r2 == NULL)
//	{
//		return false;
//	}
//
//	if (r1->val != r2->val)
//	{
//		return false;
//	}
//
//	return isSameTree(r1->left, r2->left) && isSameTree(r1->right, r2->right);
//}
//
//bool checkSubTree(struct TreeNode* t1, struct TreeNode* t2) {
//	if (t2 == NULL)
//	{
//		return true;
//	}
//
//	if (t1 == NULL)
//	{
//		return false;
//	}
//
//	if (isSameTree(t1, t2))
//	{
//		return true;
//	}
//
//	return checkSubTree(t1->left, t2) || checkSubTree(t1->right, t2);
//}
//
//tips : 注意本题中树的结点的个数可以为0，所以当t2为空树时，不管t1是否为空树，t2都是t1
//       的子树(空树可以认为是任意树的子树)。判断t2为空树后直接返回true效率会高点。
//       本题的解题思路可参考我的博客中的第五个标题——另一颗树的子树
//       链接 ->https://blog.csdn.net/m0_61064157/article/details/126850274?spm=1001.2014.3001.5502




//-----------------------------------------------
//给定两个整型数字 N 与 M，以及表示比特位置的 i 与 j（i <= j，且从 0 位开始计算）。
//编写一种方法，使 M 对应的二进制数字插入 N 对应的二进制数字的第 i ~j 位区域，不足
//之处用 0 补齐。
//
//int insertBits(int N, int M, int i, int j) {
//	for (int start = i; start <= j; start++)
//	{
//		N &= ~((unsigned int)1 << start);
//	}
//
//	return N | (M << i);
//}
//
//tips : 本题主要考察二进制的位运算。先将N中第[i,j]位的二进制数全部置为0，然后再将M左
//       移i位的结果按位或N，就可以实现将M的二进制数位插入N的第[i,j]位中。




//-----------------------------------------------
//二进制数转字符串。给定一个介于0和1之间的实数（如0.72），类型为double，打印它的二进制表达式。
//如果该数字无法精确地用32位以内的二进制表示，则打印“ERROR”。
//示例1 :
//输入：0.625
//输出："0.101"
//示例2 :
//输入：0.1
//输出："ERROR"
//提示：0.1无法被二进制准确表示
//
//class Solution {
//public:
//    string printBin(double num) {
//        string bin("0.");
//
//        while (num - (int)num != 0)
//        {
//            num *= 2;
//            
//            bin += ((int)num + '0');
//
//            num -= (int)num;
//
//            if (bin.size() >= 32)
//            {
//                return "ERROR";
//            }
//        }
//
//        return bin;
//    }
//};
//
//tips : 本题较为简单，只需要知道小数转换为二进制的要点即可(将小数乘2，取乘2后的结果的整数依次
//       作为小数点后从左往右的位上的数，将乘完2的结果继续取其小数，执行以上操作，直至小数点后
//       的数据为0为止)。




//-----------------------------------------------
//给定一个32位整数 num，你可以将一个数位从0变为1。请编写一个程序，找出你能够获得的最长的一串1的长度。
//示例 1：
//输入 : num = 1775(11011101111)
//输出 : 8
//示例 2：
//输入 : num = 7(0111)
//输出 : 4
//
//class Solution {
//public:
//    int countMaxLen(int tmp)
//    {
//        int maxLen = 0;
//        int count = 0;
//
//        for (int i = 0; i < 32; ++i)
//        {
//            if (tmp & (1 << i))
//            {
//                count++;
//            }
//
//            if ((tmp & (1 << i)) == 0)
//            {
//                if (count > maxLen)
//                {
//                    maxLen = count;
//                }
//
//                count = 0;
//            }
//        }
//
//        if (count > maxLen)
//        {
//            maxLen = count;
//        }
//        return maxLen;
//    }
//
//    int reverseBits(int num) {
//        if (num == -1)
//        {
//            return 32;
//        }
//
//        int maxLen = 0;
//
//        for (int i = 0; i < 32; ++i)
//        {
//            if ((num & (1 << i)) == 0)
//            {
//                int tmp = num | (1 << i);
//
//                int count = countMaxLen(tmp);
//
//                if (count > maxLen)
//                {
//                    maxLen = count;
//                }
//            }
//        }
//
//        return maxLen;
//    }
//};
//
//tips : 将num二进制形式上的0暂时依次置为1(每次只将一个0置换成1)。置完一个0后立即统计该数二进
//       制形式中连续1的个数，然后再继续置换下一个0，再统计连续1的个数，最后将最长连续1的个数
//       返回。




//-----------------------------------------------
//配对交换。编写程序，交换某个整数的奇数位和偶数位，尽量使用较少的指令
//（也就是说，位0与位1交换，位2与位3交换，以此类推）。
//示例1 :
//输入：num = 2（或者0b10）
//输出 1 (或者 0b01)
//示例2 :
//输入：num = 3
//输出：3
//
//int exchangeBits(int num) {
//	return ((num & 0x55555555) << 1) | ((num & 0xaaaaaaaa) >> 1);
//}
//
//tips : 解题思路，分别保留二进制位上的奇数位(& 0x55555555)和偶数位(& 0xaaaaaaaa)，将保留下
//       来的奇数位整体左移1位，将保留下来的偶数位整体右移1位，再将移动后的奇数位按位或上偶
//	   数位即可实现交换奇数位和偶数位的操作。




//-----------------------------------------------
//已知一个由像素点组成的单色屏幕，每行均有 w 个像素点，所有像素点初始为 0，左上角位置为(0, 0)。
//现将每行的像素点按照「每 32 个像素点」为一组存放在一个 int 中，再依次存入长度为 length 的一维数组中。
//我们将在屏幕上绘制一条从点(x1, y) 到点(x2, y) 的直线（即像素点修改为 1），请返回绘制过后的数组。
//注意：
//用例保证屏幕宽度 w 可被 32 整除（即一个 int 不会分布在两行上）
//
//示例1 :
//输入：length = 1, w = 32, x1 = 30, x2 = 31, y = 0
//输出：[3]
//解释：在第 0 行的第 30 位到第 31 位画一条直线，屏幕二进制形式表
//示为[00000000000000000000000000000011]，因此返回[3]
//
//示例2 :
//输入：length = 3, w = 96, x1 = 0, x2 = 95, y = 0
//输出：[-1, -1, -1]
//解释：由于二进制 11111111111111111111111111111111 的 int 类型
//代表 - 1，因此返回[-1, -1, -1]
//
//int BinTODec(char* line)
//{
//	int ret = 0;
//	int flag = 1;
//
//	// 二进制形式为负数
//	if (line[0] == '1')
//	{
//		flag = -1;
//		line[0] = '0';
//
//		// 按位取反
//		for (int i = 1; i <= 31; ++i)
//		{
//			if (line[i] == '0')
//			{
//				line[i] = '1';
//			}
//			else
//			{
//				line[i] = '0';
//			}
//		}
//
//		// 取反后加1
//		line[31] += 1;
//		for (int i = 31; i > 0; --i)
//		{
//			if (line[i] > '1')
//			{
//				line[i] = '0';
//				line[i - 1] += 1;
//			}
//		}
//		if (line[0] > '1')
//		{
//			line[0] = '0';
//		}
//	}
//
//	for (int i = 31; i >= 0; --i)
//	{
//		if (line[i] != '0')
//		{
//			ret += (int)pow(2, (31 - i));
//		}
//	}
//
//	return flag * ret;
//}
//
//int* drawLine(int length, int w, int x1, int x2, int y, int* returnSize) {
//	int* dataLine = (int*)malloc(length * sizeof(int));
//	if (dataLine == NULL)
//	{
//		return NULL;
//	}
//	*returnSize = length;
//
//	char* line = (char*)calloc(length * 32, sizeof(char));
//	if (line == NULL)
//	{
//		return NULL;
//	}
//	memset(line, '0', length * 32 * sizeof(char));
//	for (int i = x1 + y * w; i <= x2 + y * w; ++i)
//	{
//		line[i] = '1';
//	}
//
//	for (int i = 0; i < length; ++i)
//	{
//		dataLine[i] = BinTODec(line + i * 32);
//	}
//
//	free(line);
//	line = NULL;
//
//	return dataLine;
//}
//
//tips : 又是一道非常需要读懂题意的题目(可参考同步上传的图解，帮助理解题意)。本题主要考察
//       二进制转换为十进制。先写一个将二进制形式的字符串转换为十进制整型的函数BinTODec(注
//	     意要区分二进制字符串的正数与负数形式)，创建一个字符数组line用于保存“屏幕”中的
//	     像素点，用memset函数对line进行初始化，将每个元素初始化为'0'，再用一个循环对“屏幕”
//	     中点(x1, y)到点(x2, y)“划线”，即在line数组中将对应下标的元素置为'1'(此处操作将y和w
//	     引入可轻松实现对指定行的x1到x2置换为'1')，执行完以上步骤后，对“屏幕”中的每32个像
//	     素点进行处理，调用BinTODec函数处理，将转换后得到的整型数值依次存入dataLine数组中
//	     (dataLine数组需要提前开辟好，用于保存转换后的数据)，最后返回dataLine即可。




//-----------------------------------------------
//魔术索引。 在数组A[0...n - 1]中，有所谓的魔术索引，满足条件A[i] = i。
//给定一个有序整数数组，编写一种方法找出魔术索引，若有的话，在数组A中找
//出一个魔术索引，如果没有，则返回 - 1。若有多个魔术索引，返回索引值最小的一个。
//示例1 :
//输入：nums = [0, 2, 3, 4, 5]
//输出：0
//说明 : 0下标的元素为0
//示例2 :
//输入：nums = [1, 1, 1]
//输出：1
//
//int findMagicIndex(int* nums, int numsSize) {
//	for (int i = 0; i < numsSize; ++i)
//	{
//		if (nums[i] == i)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}
//
//tips : 过于简单。




//-----------------------------------------------
//递归乘法。 写一个递归函数，不使用* 运算符， 实现两个正整数的相乘。
//可以使用加号、减号、位移，但要吝啬一些。
//示例1 :
//输入：A = 1, B = 10
//输出：10
//示例2 :
//输入：A = 3, B = 4
//输出：12
//
//int multiply(int A, int B) {
//	if (A == 0 || B == 0)
//	{
//		return 0;
//	}
//
//	if (B > 1)
//	{
//		return multiply(A, B - 1) + A;
//	}
//
//	return A;
//}
//
//tips: 过于简单。




//-----------------------------------------------
//在经典汉诺塔问题中，有 3 根柱子及 N 个不同大小的穿孔圆盘，盘子可以滑入任意一根柱子。
//一开始，所有盘子自上而下按升序依次套在第一根柱子上(即每一个盘子只能放在更大的盘子上面)。
//移动圆盘时受到以下限制:
//(1) 每次只能移动一个盘子;
//(2) 盘子只能从柱子顶端滑出移到下一根柱子;
//(3) 盘子只能叠在比它大的盘子上。
//请编写程序，用栈将所有盘子从第一根柱子移到最后一根柱子。
//你需要原地修改栈。
//示例1 :
//输入：A = [2, 1, 0], B = [], C = []
//输出：C = [2, 1, 0]
//示例2 :
//输入：A = [1, 0], B = [], C = []
//输出：C = [1, 0]
//
//typedef struct Stack
//{
//	int* data;
//	int top;
//}myStack;
//
//void Move(int n, myStack* x, myStack* y, myStack* z)
//{
//	if (n == 1)
//	{
//		z->data[z->top] = x->data[x->top - 1];
//		z->top++;
//		x->top--;
//	}
//	else
//	{
//		Move(n - 1, x, z, y);
//
//		z->data[z->top] = x->data[x->top - 1];
//		z->top++;
//		x->top--;
//
//		Move(n - 1, y, x, z);
//	}
//}
//
//void hanota(int* A, int ASize, int* B, int BSize, int** C, int* CSize) {
//	if (ASize == 0)
//	{
//		return;
//	}
//
//	myStack x;
//	x.data = A;
//	x.top = ASize;
//
//	myStack y;
//	y.data = (int*)malloc(ASize * sizeof(int));
//	y.top = 0;
//
//	myStack z;
//	z.data = (int*)malloc(ASize * sizeof(int));
//	z.top = 0;
//
//	Move(ASize, &x, &y, &z);
//
//	*CSize = z.top;
//	*C = z.data;
//}
//
//tips : 考察递归解决汉诺塔问题。从左到右三根柱子分别命名为pos1，pos2，pos3，通过递归的方式
//       将pos1上的n-1个盘子借助中转点pos3移到pos2上，此时pos1还剩一个盘子，直接将该盘子从
//	     pos1移到pos3，pos2上还有刚刚移动的n-1个盘子，将pos2上的这n-1个盘子借助中转点pos1移
//	     到pos3上，到此移动完毕。




//-----------------------------------------------
//给定两个排序后的数组 A 和 B，其中 A 的末端有足够的缓冲空间容纳 B。 
//编写一个方法，将 B 合并入 A 并排序。
//初始化 A 和 B 的元素数量分别为 m 和 n。
//示例 :
//输入:
//A = [1, 2, 3, 0, 0, 0], m = 3
//B = [2, 5, 6], n = 3
//输出 : [1, 2, 2, 3, 5, 6]
//
//void merge(int* A, int ASize, int m, int* B, int BSize, int n) {
//	int pos = m + n -1;
//	int end1 = m - 1;
//	int end2 = n - 1;
//
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (B[end2] >= A[end1])
//		{
//			A[pos--] = B[end2--];
//		}
//		else
//		{
//			A[pos--] = A[end1--];
//		}
//	}
//
//	while (end2 >= 0)
//	{
//		A[pos--] = B[end2--];
//	}
//}
//
//tips : 简单题。从后往前比较A，B两个数组的元素，取大的那个数据放在A数组的后面，依次从后往前放。遍
//       历A，B两个数组，若A数组先遍历完，则需要判断B数组是否遍历完，若未遍历完，则将B数组中的数据
//	   从后往前依次放入A数组中；若B数组先遍历完，则说明已经完成将B数组归并至A数组中且排序。




//-----------------------------------------------
//搜索旋转数组。给定一个排序后的数组，包含n个整数，但这个数组已被旋转过很多次了，次数不详。
//请编写代码找出数组中的某个元素，假设数组元素原先是按升序排列的。若有多个相同元素，返回索引值最小的一个。
//示例1 :
//输入: arr = [15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14], target = 5
//输出 : 8（元素5在该数组中的索引）
//示例2 :
//输入：arr = [15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14], target = 11
//输出： - 1 （没有找到）
//
//int search(int* arr, int arrSize, int target) {
//	for (int i = 0; i < arrSize; ++i)
//	{
//		if (arr[i] == target)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}
//
//tips : 直接遍历。




//-----------------------------------------------
//稀疏数组搜索。有个排好序的字符串数组，其中散布着一些空字符串，编写一种方法，找出给定字符串的位置。
//示例1 :
//输入: words = ["at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""], s = "ta"
//输出： - 1
//说明 : 不存在返回 - 1。
//示例2 :
//输入：words = ["at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""], s = "ball"
//输出：4
//
//int findString(char** words, int wordsSize, char* s) {
//	for (int i = 0; i < wordsSize; ++i)
//	{
//		if (strcmp(words[i], s) == 0)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}
//
//tips : 遍历加字符串比较。




//-----------------------------------------------
//给定M×N矩阵，每一行、每一列都按升序排列，请编写代码找出某元素。
//示例 :
//现有矩阵 matrix 如下：
//[
//	[1, 4, 7, 11, 15],
//	[2, 5, 8, 12, 19],
//	[3, 6, 9, 16, 22],
//	[10, 13, 14, 17, 24],
//	[18, 21, 23, 26, 30]
//]
//给定 target = 5，返回 true。
//给定 target = 20，返回 false。
//
//bool searchMatrix(int** matrix, int matrixSize, int matrixColSize, int target) {
//	int row = 0;
//	int col = matrixColSize - 1;
//
//	while (row < matrixSize && col >= 0)
//	{
//		if (matrix[row][col] > target)
//		{
//			col--;
//		}
//		else if (matrix[row][col] < target)
//		{
//			row++;
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//	return false;
//}
//
//tips : 解题思路参考同步上传的图解。




//-----------------------------------------------
//在一个整数数组中，“峰”是大于或等于相邻整数的元素，相应地，“谷”是小于或
//等于相邻整数的元素。例如，在数组{ 5, 8, 4, 2, 3, 4, 6 }中，{ 8, 6 }是峰，
//{ 5, 2 }是谷。现在给定一个整数数组，将该数组按峰与谷的交替顺序排序。
//示例 :
//输入: [5, 3, 1, 2, 3]
//输出 : [5, 1, 3, 2, 3]
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void reverse(int* p, int num)
//{
//	int left = 0;
//	int right = num - 1;
//
//	while (left < right)
//	{
//		int tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void wiggleSort(int* nums, int numsSize) {
//	if (numsSize == 0 || numsSize == 1)
//	{
//		return;
//	}
//
//	qsort(nums, numsSize, sizeof(int), cmp);
//
//	int data1[5000] = { 0 };
//	int data2[5000] = { 0 };
//	int index1 = 0;
//	int index2 = 0;
//
//	for (int i = 0; i < numsSize; ++i)
//	{
//		if (i % 2 == 0)
//		{
//			data1[index1++] = nums[i];
//		}
//		else
//		{
//			data2[index2++] = nums[i];
//		}
//	}
//
//	reverse(data1, index1);
//	reverse(data2, index2);
//
//	--index1;
//	--index2;
//	int* lessD = data1;
//	int lessi = index1;
//	int* greaterD = data2;
//	int greateri = index2;
//
//	if (data1[index1] > data2[index2])
//	{
//		lessD = data2;
//		lessi = index2;
//		greaterD = data1;
//		greateri = index1;
//	}
//
//	int i = 0;
//	while (lessi >= 0 && greateri >= 0)
//	{
//		if (i % 2 == 0)
//		{
//			nums[i++] = greaterD[greateri--];
//		}
//		else
//		{
//			nums[i++] = lessD[lessi--];
//		}
//	}
//
//	while (lessi >= 0)
//	{
//		nums[i++] = lessD[lessi--];
//	}
//
//	while (greateri >= 0)
//	{
//		nums[i++] = greaterD[greateri--];
//	}
//}
//
//tips : 本题输出结果不唯一，只要保证是按照峰谷交替的顺序即可。本题的大思路是，先将数值排
//       升序，按照下标为奇偶分两组，两组数据从前往后取，将大的那个数据先插入nums数组中，
//	     之后交替插入。注意要处理空数组和数组中只有一个数据的问题。




//-----------------------------------------------
//编写一个函数，不用临时变量，直接交换numbers = [a, b]中a与b的值。
//示例：
//输入 : numbers = [1, 2]
//输出 : [2, 1]
//
//int* swapNumbers(int* numbers, int numbersSize, int* returnSize) {
//	numbers[0] ^= numbers[1];
//	numbers[1] ^= numbers[0];
//	numbers[0] ^= numbers[1];
//
//	*returnSize = numbersSize;
//	return numbers;
//}
//
//tips : 使用异或(^)来解决。




//-----------------------------------------------
//设计一个算法，判断玩家是否赢了井字游戏。输入是一个 N × N 的
//数组棋盘，由字符" "，"X"和"O"组成，其中字符" "代表一个空位。
//以下是井字游戏的规则：
//玩家轮流将字符放入空位（" "）中。
//第一个玩家总是放字符"O"，且第二个玩家总是放字符"X"。
//"X"和"O"只允许放置在空位中，不允许对已放有字符的位置进行填充。
//当有N个相同（且非空）的字符填充任何行、列或对角线时，游戏结束，对应该字符的玩家获胜。
//当所有位置非空时，也算为游戏结束。
//如果游戏结束，玩家不允许再放置字符。
//如果游戏存在获胜者，就返回该游戏的获胜者使用的字符（"X"或"O"）；如果游戏以平局结束，则
// 返回 "Draw"；如果仍会有行动（游戏未结束），则返回 "Pending"。
//示例 1：
//输入： board = ["O X", " XO", "X O"]
//输出： "X"
//示例 2：
//输入： board = ["OOX", "XXO", "OXO"]
//输出： "Draw"
//解释： 没有玩家获胜且不存在空位
//示例 3：
//输入： board = ["OOX", "XXO", "OX "]
//输出： "Pending"
//解释： 没有玩家获胜且仍存在空位
//
//bool isFull(char** board, int boardSize)
//{
//	for (int i = 0; i < boardSize; ++i)
//	{
//		for (int j = 0; j < boardSize; ++j)
//		{
//			if (board[i][j] == ' ')
//			{
//				return false;
//			}
//		}
//	}
//
//	return true;
//}
//
//char* tictactoe(char** board, int boardSize) {
//	int flag = 0;
//	char key = 0;
//
//	// 行相同
//	for (int i = 0; i < boardSize; ++i)
//	{
//		int j = 0;
//		flag = 1;
//		key = board[i][j];
//
//		for (; j < boardSize; ++j)
//		{
//			if (board[i][j] != key)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag && board[i][j - 1] != ' ')
//		{
//			if (board[i][j - 1] == 'O')
//			{
//				return "O";
//			}
//
//			if (board[i][j - 1] == 'X')
//			{
//				return "X";
//			}
//		}
//	}
//
//	// 列相同
//	for (int j = 0; j < boardSize; ++j)
//	{
//		int i = 0;
//		flag = 1;
//		key = board[i][j];
//
//		for (; i < boardSize; ++i)
//		{
//			if (board[i][j] != key)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag && board[i - 1][j] != ' ')
//		{
//			if (board[i - 1][j] == 'O')
//			{
//				return "O";
//			}
//
//			if (board[i - 1][j] == 'X')
//			{
//				return "X";
//			}
//		}
//	}
//
//	// 主对角线相同
//	flag = 1;
//	key = board[0][0];
//	for (int i = 1, j = 1; i < boardSize; ++i, ++j)
//	{
//		if (board[i][j] != key)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//	{
//		if (board[0][0] == 'O')
//		{
//			return "O";
//		}
//
//		if (board[0][0] == 'X')
//		{
//			return "X";
//		}
//	}
//
//	// 次对角线相同
//	flag = 1;
//	key = board[0][boardSize - 1];
//	for (int i = 1, j = boardSize - 2; i < boardSize && j >= 0; ++i, --j)
//	{
//		if (board[i][j] != key)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//	{
//		if (board[0][boardSize - 1] == 'O')
//		{
//			return "O";
//		}
//
//		if (board[0][boardSize - 1] == 'X')
//		{
//			return "X";
//		}
//	}
//
//	// 平局
//	if (isFull(board, boardSize))
//	{
//		return "Draw";
//	}
//
//	// 继续
//	return "Pending";
//}
//
//tips : 本题主要考察对二维数组的处理，难度不大，但要花时间调试，是个体力活。




//-----------------------------------------------
//给定两个整数数组a和b，计算具有最小差绝对值的一对数值（每个数组中取一个值），并返回该对数值的差
//示例：
//输入：{ 1, 3, 15, 11, 2 }, { 23, 127, 235, 19, 8 }
//输出：3，即数值对(11, 8)
//
//int Cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//long long sub_BinarySearch(int a_data, int* b, int bSize)
//{
//	long long minRet = 4294967295;
//
//	int left = 0;
//	int right = bSize - 1;
//
//	while (left <= right)
//	{
//		int mid = left + ((right - left) / 2);
//
//		long long ret = a_data - b[mid];
//		if (ret < 0)
//		{
//			ret *= -1;
//		}
//
//		if (ret < minRet)
//		{
//			minRet = ret;
//		}
//
//		if (b[mid] > a_data)
//		{
//			right = mid - 1;
//		}
//		else if (b[mid] < a_data)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//
//	return minRet;
//}
//
//int smallestDifference(int* a, int aSize, int* b, int bSize) {
//	qsort(b, bSize, sizeof(int), Cmp);
//
//	long long minRet = 2147483647;
//
//	for (int i = 0; i < aSize; ++i)
//	{
//		long long tmp = sub_BinarySearch(a[i], b, bSize);
//		if (tmp < minRet)
//		{
//			minRet = sub_BinarySearch(a[i], b, bSize);
//		}
//	}
//
//	return minRet;
//}
//
//tips : 本题的大思路是：先将b数组排序，再遍历a数组的数据，用二分查找从b数组中找与a中数据最接近
//       那个数。每拿到一个b[mid]都要和a_data相减，防止出现最后一次查找的差值反而还比之前的差值
//	     大的情况。还要注意本题有个很恶心的测试用例 [-2147483648, 1] [2147483647, 0] ，注意处理
//	     两个数据相减后会数据溢出的情况(即int装不下，要改用long long)。




//-----------------------------------------------
//你正在使用一堆木板建造跳水板。有两种类型的木板，其中长度较短的木板
//长度为shorter，长度较长的木板长度为longer。你必须正好使用k块木板。
//编写一个方法，生成跳水板所有可能的长度。
//返回的长度需要从小到大排列。
//示例
//输入：
//shorter = 1
//longer = 2
//k = 3
//输出：[3, 4, 5, 6]
//解释：
//可以使用 3 次 shorter，得到结果 3；使用 2 次 shorter 和 1 次 longer，得到结果 4 。以此类推，得到最终结果。
//
//class Solution {
//public:
//    vector<int> divingBoard(int shorter, int longer, int k) {
//        vector<int> vi;
//
//        if (k == 0)
//        {
//            return vi;
//        }
//
//        if (shorter == longer)
//        {
//            vi.push_back(shorter * k);
//            return vi;
//        }
//
//        vi.resize(k + 1);
//
//        for (int i = 0; i <= k; ++i)
//        {
//            vi[i] = i * longer + (k - i) * shorter;
//        }
//
//        return vi;
//    }
//};
//
//tips : 简单的组合问题。以shorter = 1，longer = 2，k = 3为例，一共有4种组合情况[shorter的数量, longer的数量]
//       [shorter的数量, longer的数量] -> [0, 3] [1, 2] [2, 1] [3, 0]，将上述情况的结果存入一个vector<int>中
//       即可。

// water

