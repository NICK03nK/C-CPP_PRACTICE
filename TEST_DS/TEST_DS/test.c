#define _CRT_SECURE_NO_WARNINGS 1

//-----------------------------------------------
//NC248 左叶子之和

/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  *
  *
  * @param root TreeNode类
  * @return int整型
  */
//int sumOfLeftLeaves(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    int sum = 0;
//    if (root->left && root->left->left == NULL && root->left->right == NULL)
//    {
//        sum += root->left->val;
//    }
//
//    return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
//}




//-----------------------------------------------
//据说著名犹太历史学家 Josephus 有过以下故事：在罗马人占领乔塔帕特后，39 个犹太人与Josephus
//及他的朋友躲到一个洞中，39个犹太人决定宁愿死也不要被敌人抓到，于是决定了一种自杀方式，41个人
//排成一个圆圈，由第1个人开始报数，报数到3的人就自杀，然后再由下一个人重新报1，报数到3的人再自
//杀，这样依次下去，直到剩下最后一个人时，那个人可以自由选择自己的命运。这就是著名的约瑟夫问题。
//现在请用单向环形链表得出最终存活的人的编号。
//输入描述 :
//一行两个整数 n 和 m， n 表示环形链表的长度， m 表示每次报数到 m 就自杀。
//输出描述 :
//输出最后存活下来的人编号(编号从1开始到n)
//
/**
 *
 * @param n int整型
 * @param m int整型
 * @return int整型
 */
 //
 //typedef struct ListNode LTNode;
 //
 //LTNode* BuyNode(int val)
 //{
 //    LTNode* n = (LTNode*)malloc(sizeof(LTNode));
 //    if (n == NULL)
 //    {
 //        return NULL;
 //    }
 //
 //    n->val = val;
 //    n->next = NULL;
 //
 //    return n;
 //}
 //
 //LTNode* CreatList(int n)
 //{
 //    LTNode* head = BuyNode(1);
 //    LTNode* tail = head;
 //
 //    for (int i = 2; i <= n; i++)
 //    {
 //        LTNode* newnode = BuyNode(i);
 //
 //        tail->next = newnode;
 //        tail = newnode;
 //    }
 //    tail->next = head;
 //
 //    return head;
 //}
 //
 //int ysf(int n, int m) {
 //    LTNode* head = CreatList(n);
 //    LTNode* cur = head;
 //
 //    while (cur->next != cur)
 //    {
 //        int count = m;
 //
 //        while (--count)
 //        {
 //            cur = cur->next;
 //        }
 //
 //        LTNode* del = cur->next;
 //        cur->val = del->val;
 //        cur->next = del->next;
 //        free(del);
 //    }
 //
 //    int ret = cur->val;
 //    free(cur);
 //
 //    return ret;
 //}