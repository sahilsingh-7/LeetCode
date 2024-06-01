class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *temp = head->next, *ptr = NULL;
        while(temp != NULL){
            head->next = ptr;
            ptr = head;
            head = temp;
            temp = temp->next;
        }
        head->next = ptr;
        return head;
    }
};
