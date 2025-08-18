class Solution {
public:
    void ListReverse(ListNode*& head, ListNode* tmp) {
        if (tmp->next == NULL) {
            head = tmp;
            return;
        }
        ListReverse(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
            return head;

        ListReverse(head, head);
        return head;
    }
};