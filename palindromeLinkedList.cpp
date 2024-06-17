
class Solution {
public:
    ListNode* rev(ListNode *head){
        ListNode *prev = NULL;
        ListNode *curr = head;

        while(curr){
            head = curr->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *r = rev(slow);

        while(r){
            if(head->val != r->val) return false;
            head = head->next;
            r = r->next;
        }
        return true;
    }
};
