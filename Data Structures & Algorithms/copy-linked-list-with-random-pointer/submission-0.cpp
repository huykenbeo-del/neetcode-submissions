/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node dummy(0);
        Node* tail=&dummy;
        Node* cur=head;
        unordered_map<Node*,Node*> mp;
        while(cur!=NULL){
            Node* newNode=new Node(cur->val);
            tail->next=newNode;
            tail=newNode;
            mp.insert({cur,newNode});
            cur=cur->next;
        }
        for(auto it:mp){
            if(it.first->random==NULL) continue;
            else if(mp.find(it.first->random)!=mp.end()){
                auto link=mp.find(it.first->random);
                it.second->random=link->second;
            }
        }
        return dummy.next;
    }
};
