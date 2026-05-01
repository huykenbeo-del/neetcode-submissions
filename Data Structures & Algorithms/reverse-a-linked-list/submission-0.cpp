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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* newHead=NULL;
        ListNode* cur=head;
        while(cur!=NULL){
            ListNode* newNode=new ListNode(cur->val);
            if(newHead==NULL){
                newHead=newNode;
            }else{
                newNode->next=newHead;
                newHead=newNode;
            }
            cur=cur->next;
        }
        return newHead;
    }
};
