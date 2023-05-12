/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* reverseList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode *h = head, *e = head->next, *t;
    h->next = nullptr;  // optional
    while (e->next) {
        t = e->next;
        e->next = h;
        h = e;
        e = t;
    }
    e->next = h;
    return e;
}