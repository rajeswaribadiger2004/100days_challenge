class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* cur= head;
        int len = 1;
        while (cur->next != NULL) {
            len++;
            cur=cur->next;
        }
        cur->next = head;
        k = k % len;
        int end = len - k;
        cur = head;
        while (end > 1) {
            end--;
            cur = cur->next;
        }
        head = cur->next;
        cur->next = NULL;

        return head;
    }
};
