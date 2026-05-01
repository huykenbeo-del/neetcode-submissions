/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* cur=head;
        while(cur!=NULL){
            size++;
            cur=cur->next;
        }
        cur=head;
        ListNode* pre=NULL;
        int remove=size-n;
        for(int i=0;i<remove;i++){
            pre=cur;
            cur=cur->next;
        }
        if(cur==head){
            head=head->next;
            delete cur;
        }else if(cur==NULL){
            delete pre;
        }else{
            pre->next=cur->next;
            delete cur;
        }
        return head;
    }
};
