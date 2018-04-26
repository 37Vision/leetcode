/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* p = NULL;
    struct ListNode* head = NULL;
    //��ʼ��
    if(!l2)
        return l1;
    else if(!l1)
        return l2;
    else if(l1->val >= l2->val)
    {
        p = l2;
        l2 = l2->next;
    }
    else
    {
        p = l1;
        l1 = l1->next;
    }
    head = p;
    //����
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val >= l2->val)
        {
            p->next = l2;
            p = p->next;
            l2 = l2->next;
        }
        else
        {
            p->next = l1;
            p = p->next;
            l1 = l1->next;
        }
    }
    //�ж��ĸ��������
    if(l1 == NULL)
    {
        while(l2)
        {
            p->next = l2;
            p = p->next;
            l2 = l2->next;
        }
        p->next = l2;
    }
    else
    {
        while(l1)
        {
            p->next = l1;
            p = p->next;
            l1 = l1->next;
        }
        p->next = l1;
    }
    //���ؽ��
    return head;
}
