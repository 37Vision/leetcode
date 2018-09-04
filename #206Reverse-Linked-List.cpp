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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* p = head;
        while(p->next != NULL)
            p = p->next;	//链表的尾节点
        while(head != p)		//迭代思想，先转换头节点，再转换头节点的下一个节点，直到尾节点
        {
            ListNode* prior_head = head;
            head = prior_head->next;
            prior_head->next = p->next;
            p->next = prior_head;
        }
        return head;
    }
};