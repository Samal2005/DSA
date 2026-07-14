/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *s=head;
        bool k=false;
          ListNode *f=head;
          while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=f->next->next;
            if(s==f){
                 ListNode *p=head;
                 while(p!=f){
                    f=f->next;
                    p=p->next;
                 }
                 return p;
            }
            
        
          }
           
           return 0;
          
    }
};