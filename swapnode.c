
// typedef struct ListNode {
//     int val;
//       struct ListNode *next;
//   }node;

struct ListNode* swapNodes(struct ListNode* head, int k) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode *t = head, *f = head, *s = head;
    int c =0,te,st,en;
    while(t!=NULL){
        c++;
        t = t->next;
    }
    st = k-1;
    en = count - k;
    while(st--){
        f = f->next;
    }
    while(en--){
        s = s->next;
    }
    te = f->next;
    f->next = s->next;
    s->next = te;
    return head;
}
