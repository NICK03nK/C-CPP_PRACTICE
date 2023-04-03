#define _CRT_SECURE_NO_WARNINGS 1

//-----------------------------------------------
//NC248 ��Ҷ��֮��

/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  *
  *
  * @param root TreeNode��
  * @return int����
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
//��˵������̫��ʷѧ�� Josephus �й����¹��£���������ռ���������غ�39 ����̫����Josephus
//���������Ѷ㵽һ�����У�39����̫�˾�����Ը��Ҳ��Ҫ������ץ�������Ǿ�����һ����ɱ��ʽ��41����
//�ų�һ��ԲȦ���ɵ�1���˿�ʼ������������3���˾���ɱ��Ȼ��������һ�������±�1��������3��������
//ɱ������������ȥ��ֱ��ʣ�����һ����ʱ���Ǹ��˿�������ѡ���Լ������ˡ������������Լɪ�����⡣
//�������õ���������ó����մ����˵ı�š�
//�������� :
//һ���������� n �� m�� n ��ʾ��������ĳ��ȣ� m ��ʾÿ�α����� m ����ɱ��
//������� :
//���������������˱��(��Ŵ�1��ʼ��n)
//
/**
 *
 * @param n int����
 * @param m int����
 * @return int����
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