class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
        temp->next = head;
        ListNode *ptr = temp,*swap1,*swap2;

        while(ptr->next && ptr->next->next){

            swap1 = ptr->next;
            swap2 = ptr->next->next;

            swap1->next = swap2->next;
            swap2->next = swap1;

            ptr->next = swap2;
            ptr = swap1; 
        }
        return temp->next;
    }
};
