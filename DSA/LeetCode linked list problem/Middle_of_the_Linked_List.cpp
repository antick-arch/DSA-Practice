class Solution {
public:
    int sizeOfLinekedList(ListNode* head) {
        ListNode* tmp = head;
        int count = 0;
        while (tmp != NULL) {
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sizeOfList = sizeOfLinekedList(head);
        int mid = sizeOfList / 2;
        ListNode* tmp = head;
        for (int i = 0; i < mid; i++) {
            tmp = tmp->next;
        }
        return tmp;
    }
};