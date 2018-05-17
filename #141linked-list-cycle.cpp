/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(slow&&fast)
    {
        slow = slow->next;	//慢指针一次走一步
        if(fast->next != NULL)
            fast = fast->next->next;//快指针一次走两步
        else
            fast = fast->next;
        if(slow == fast)
            break;
    }
    if(slow&&fast)
        return true;
    else
        return false;

}
