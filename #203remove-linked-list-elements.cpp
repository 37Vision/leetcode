/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
	//处理头节点
    while(head && head->val == val)
    {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
    if(!head)
        return NULL;
    struct ListNode* p = head;
	//处理非头节点
    while(p->next)
        if(p->next->val == val)
        {
            struct ListNode* temp = p->next;
            p->next = temp->next;
            free(temp);
        }
        else
            p = p->next;
    return head;
}