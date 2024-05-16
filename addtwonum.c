                            // My First time Code 


// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//     struct ListNode *t1 = l1;
//     struct ListNode *t2 = l2;
//     struct ListNode *tail = NULL,*head = NULL;
//     int carry=0;
//     while(t1!=NULL || t2!=NULL){
//         if(t1!=NULL && t2!=NULL){
//             insertend(&tail,&head,(t1->val + t2->val+carry),&carry);
//             t1 = t1->next;
//             t2 = t2->next;
//         }
//         if(t1 == NULL  || t2 == NULL){
//             if(t1!=NULL){
//                 while(t1!=NULL){
//                     insertend(&tail,&head,t1->val+carry,&carry);
//                     t1=t1->next;
//                 }
//             }
//             if(t2!=NULL){
//                 while(t2!=NULL){
//                     insertend(&tail,&head,t2->val+carry,&carry);
//                     t2=t2->next;
                        
//                 }
//             }
//         }    
//     }
//     if((t1==NULL && t2==NULL) && carry == 1){
//         insertend(&tail,&head,carry,&carry);
//     }
//     return head;
// }

// void insertend(struct ListNode **tail,struct ListNode **head,int va,int *cary){
//     struct ListNode *t = NULL;
//     t = (struct ListNode*)malloc(sizeof(struct ListNode));
//     t->next = NULL;
//     if(*tail == NULL){
//         if(va>9){
//             va -=10;
//             *cary=1;
//         }
//         t->val = va;
//         *tail = t;
//         *head = t;
//     }
//     else{
//         if(va>9){
//             *cary =1;
//             va-=10;
//         }
//         else{
//             *cary = 0;
//         }
//         (*tail)->next = t;
//         t->val = va;
//         *tail = t;
//     }

// }



////                  my improved code(5ms);

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head = NULL,*tail = NULL;
    int cary = 0;
    while(l1 !=NULL || l2!=NULL || cary){
        int sum = (l1?l1->val:0) + (l2?l2->val:0) + cary;
        struct ListNode *t = (struct ListNode*)malloc(sizeof(struct ListNode));
        t->next = NULL;
        t->val = sum%10;
        cary = sum/10;
        if(!head){
            head = tail =  t;
        }
        else{
            tail->next = t;
            tail = t;
        }
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    return head;
}