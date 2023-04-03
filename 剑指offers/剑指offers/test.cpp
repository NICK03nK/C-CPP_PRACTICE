// 剑指 Offer 04. 二维数组中的查找
//class Solution {
//public:
//    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
//        if (matrix.empty())
//        {
//            return false;
//        }
//
//        int i = 0;
//        int j = matrix[0].size() - 1;
//
//        while (i < matrix.size() && j >= 0)
//        {
//            if (matrix[i][j] < target)
//            {
//                i += 1;
//            }
//            else if (matrix[i][j] > target)
//            {
//                j -= 1;
//            }
//            else
//            {
//                return true;
//            }
//        }
//
//        return false;
//    }
//};
//
//tips : 将右上角的数据作为初始比较值，若当前值比target小，则往下移动；若当前值比target大，则往左移动
//       二维数组中找到target值则返回true，若坐标值超出合法范围则返回false。




// 剑指 Offer 11. 旋转数组的最小数字
//class Solution {
//public:
//    int minArray(vector<int>& numbers) {
//        int left = 0;
//        int right = numbers.size() - 1;
//        int mid = 0;
//
//        while (left < right)
//        {
//            if (numbers[left] < numbers[right])
//            {
//                return numbers[left];
//            }
//
//            if (right - left == 1)
//            {
//                mid = right;
//                break;
//            }
//
//            mid = left + ((right - left) >> 1);
//
//            if (numbers[left] == numbers[right] && numbers[left] == numbers[mid])
//            {
//                int result = numbers[left];
//                for (int i = left + 1; i < right; ++i)
//                {
//                    if (numbers[i] < result)
//                    {
//                        result = numbers[i];
//                    }
//                }
//
//                return result;
//            }
//
//            if (numbers[mid] >= numbers[left])
//            {
//                left = mid;
//            }
//            else
//            {
//                right = mid;
//            }
//        }
//
//        return numbers[mid];
//    }
//};
//
//tips : 采用二分查找的思想来提高效率。因为该数组是经过旋转的，所以会分成前半部分和后半部分(两部分都是升序的)，
//       而我们要找的最小值就是这两部分的交界处的数值。旋转后的数组最初的numbers[left]通常大于numbers[right]，
//       此时我们求得数组的numbers[mid]来与numbers[left]进行比较，若numbers[mid] >= numbers[left]，则说明此时
//       的numbers[mid]处于数组的前半部分中，我们要求的最小值不在前半部分而是在后半部分的开头，所以要缩小区间
//       范围，让left = mid；若numbers[mid] < numbers[left]，则说明此时numbers[mid]处于数组的后半部分，我们要
//       求的最小值在后半部分的开头，即mid的左边，缩小区间，使right = mid。当left和right相邻时right就是我们要
//       求的最小值。
//       本题还有几点需要注意：测试用例可能会出现旋转至初始状态的情况(旋转了一圈，相当于没旋转)；
//                             如果numbers[left] == numbers[right] == numbers[mid]，则无法确定numbers是处于数
//                             组的前半部分还是后半部分，则这种情况使用遍历数组找出最小值解决。




// 剑指 Offer 21. 调整数组顺序使奇数位于偶数前面(不能改变奇数与奇数，偶数与偶数间的相对位置)
// version 1:
//class Solution {
//public:
//    vector<int> exchange(vector<int>& nums) {
//        vector<int> vi;
//
//        for (auto e : nums)
//        {
//            if ((e & 1) == 1)
//            {
//                vi.push_back(e);
//            }
//        }
//        for (auto e : nums)
//        {
//            if ((e & 1) == 0)
//            {
//                vi.push_back(e);
//            }
//        }
//
//        return vi;
//    }
//};
//
//tips : 使用额外的空间来存储调整后的数组，通过遍历两遍来实现原数组来将奇数元素放在偶数元素前。
//
// version 2:
//class Solution {
//public:
//    vector<int> exchange(vector<int>& nums) {
//        int k = 0;
//
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if ((nums[i] & 1) == 1)
//            {
//                int tmp = nums[i];
//                int j = i;
//
//                while (j > k)
//                {
//                    nums[j] = nums[j - 1];
//                    --j;
//                }
//                nums[k++] = tmp;
//            }
//        }
//
//        return nums;
//    }
//};
//
//tips : 借助插入的思想。当遍历到奇数元素时把该奇数元素前的偶数元素都后移，再将该奇数元素插入到前面的空位处即可。
//       (该方法在leetcode中跑过了所有测试用例，但是超时了)




// 剑指 Offer 39. 数组中出现次数超过一半的数字
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        if (nums.size() == 1)
//        {
//            return nums[0];
//        }
//
//        sort(nums.begin(), nums.end());
//
//        int cnt = 1;
//        int i = 0;
//        for (i = 1; i < nums.size(); ++i)
//        {
//            if (nums[i - 1] == nums[i])
//            {
//                ++cnt;
//            }
//            else
//            {
//                cnt = 1;
//            }
//
//            if (cnt > nums.size() / 2)
//            {
//                break;
//            }
//        }
//
//        return nums[i];
//    }
//};
//
//tips : 先排序，再遍历计数，当某个元素出现的次数超过数组长度一半时返回该元素即可。




// 剑指 Offer 05. 替换空格
//class Solution {
//public:
//    string replaceSpace(string s) {
//        int cnt = 0;
//        for (auto e : s)
//        {
//            if (e == ' ')
//            {
//                ++cnt;
//            }
//        }
//
//        int old_index = s.size() - 1;
//        s.resize(s.size() + cnt * 2);
//        int new_index = s.size() - 1;
//
//        while (old_index >= 0 && new_index >= 0)
//        {
//            if (s[old_index] == ' ')
//            {
//                s[new_index--] = '0';
//                s[new_index--] = '2';
//                s[new_index--] = '%';
//                --old_index;
//            }
//            else
//            {
//                s[new_index] = s[old_index];
//                --old_index;
//                --new_index;
//            }
//        }
//
//        return s;
//    }
//};
//
//tips : 先统计字符串中空格的个数，再将字符串resize至替换后的大小，借助两个index，old_index指
//       向原数组的尾元素，new_index指向resize后的尾元素位置，若old_index指向的元素不为空格，
//       则old_index和new_index都向前移；若old_index指向的元素为空格时，new_index依次放入02%，
//       放完后old_index再前移,以此类推，直到old_index指向首元素为止。




// 剑指 Offer 06. 从尾到头打印链表
// version 1:
//class Solution {
//public:
//    vector<int> reversePrint(ListNode* head) {
//        vector<int> vt;
//        stack<int> st;
//
//        ListNode* cur = head;
//        while (cur != nullptr)
//        {
//            st.push(cur->val);
//            cur = cur->next;
//        }
//
//        while (!st.empty())
//        {
//            vt.push_back(st.top());
//            st.pop();
//        }
//
//        return vt;
//    }
//};
//
//tips : 利用栈的FILO特性解决问题。
//
// version 2:
//class Solution {
//public:
//    vector<int> reversePrint(ListNode* head) {
//        vector<int> vt;
//        ListNode* cur = head;
//        while (cur != nullptr)
//        {
//            vt.push_back(cur->val);
//            cur = cur->next;
//        }
//
//        reverse(vt.begin(), vt.end());
//
//        return vt;
//    }
//};
//
//tips : 先把链表中的数据取出放入vector中，再逆置即可。
//
// version 3:
//class Solution {
//public:
//    void reverseInsert(ListNode* node, vector<int>& vt)
//    {
//        if (node == nullptr)
//        {
//            return;
//        }
//
//        reverseInsert(node->next, vt);
//        vt.push_back(node->val);
//    }
//
//    vector<int> reversePrint(ListNode* head) {
//        vector<int> vt;
//
//        reverseInsert(head, vt);
//
//        return vt;
//    }
//};
//
//tips : 使用函数的递归调用即可，要注意递归的结束条件。




// 剑指 Offer 07. 重建二叉树
//class Solution {
//public:
//    TreeNode* retBinaryTree(vector<int>& preorder, int pre_start, int pre_end, vector<int>& inorder, int in_start, int in_end)
//    {
//        if (pre_start > pre_end || in_start > in_end)
//        {
//            return nullptr;
//        }
//
//        TreeNode* root = new TreeNode(preorder[pre_start]);
//
//        for (int i = in_start; i <= in_end; ++i)
//        {
//            if (inorder[i] == root->val)
//            {
//                root->left = retBinaryTree(preorder, pre_start + 1, pre_start + i - in_start, inorder, in_start, i - 1);
//                root->right = retBinaryTree(preorder, pre_start + i - in_start + 1, pre_end, inorder, i + 1, in_end);
//                break;
//            }
//        }
//
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        if (preorder.empty() || inorder.empty() || preorder.size() != inorder.size())
//        {
//            return nullptr;
//        }
//
//        return retBinaryTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
//    }
//};
//
//tips : 结合画图分析较容易理解。首先可通过前序数列来确定二叉树的根结点，再在中序数列中找到根结点从而
//       得出该根结点的左右子树的数列。再将左子树的数列作为重建对象，再次从前序数列中找到左子树的根结
//       点，再从中序数列找到该根结点的左右子树的数列(右子树同理)。
//       当pre_start > pre_end或in_start > in_end时，说明当前子树的前序遍历数列或中序遍历数列不存在，
//       所以将该条件作为重建二叉树的递归停止条件。(还是得画图，代码与图像结合更好理解)
water
