/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lena = 0,lenb = 0;
    struct ListNode *pa = headA,*pb = headB;
	//求出两个链表的长度
    while(pa!=NULL)
    {
        lena++;
        pa = pa->next;
    }
    while(pb!=NULL)
    {
        lenb++;
        pb = pb->next;
    }
	//移动长度较长的链表使它们对齐
    while(lena>lenb)
    {
        headA = headA->next;
        lena--;
    }
    while(lenb>lena)
    {
        headB = headB->next;
        lenb--;
    }
    while(headA&&headB)
    {
        if(headA == headB)
            return headA;
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}