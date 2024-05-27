class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x;
        vector <ListNode *> p;
        ListNode *temp = head;
        while(temp!=NULL){
            p.push_back(temp);
            temp = temp->next;
        }
        x = p.size();
        if(x==n){
            if(x==1) return NULL;
            head = head->next;
            return head;
        }
        (p[x-n-1])->next = (p[x-n])->next;
        return head;
    }
};
