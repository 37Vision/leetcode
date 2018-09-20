/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	//将链表用数组储存
    bool isPalindrome(ListNode* head) {
        vector<int> num;
        ListNode* p = head;
        int flag = 0;
        while(p)
        {
            num.push_back(p->val);
            p = p->next;
        }
        for(int low = 0,high = num.size()-1;high >low;low++,high--)
        {
            if(num[low] == num[high]);
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            return false;
        else
            return true;
    }
};
