class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* even,*curr,*temp;
        curr=head;
        if(!head or !head->next or !head->next->next) return head;
        even=head;       
        int n=0;
        while(even){
            ++n;
            even=even->next;
        }
        even=head->next;
        while(head->next and head->next->next){
            temp=head->next;
            head->next=head->next->next;
            head=temp;
        }
        
        if(n%2){
            head->next->next=even;
            head->next=NULL;
        }
        else{
            head->next=even;
        }
        return curr;
    }
};
