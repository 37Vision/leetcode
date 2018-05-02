/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL)
        return head;
    struct ListNode *p = head,*temp = p->next;
    while(temp != NULL)
    {
        if(p->val == temp->val)
        {
            p->next = temp->next;
            free(temp);
        }
        else
            p = p->next;	//如果当前值和下一个值不等时移动指针P
        if(p != NULL)
            temp = p->next;
        else
            temp = NULL;
    }
    return head;
}