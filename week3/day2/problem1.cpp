#include<bits/stdc++.h>

using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        ListNode *head;
        if(h1==NULL||h2==NULL){
            return h1==NULL?h2:h1;
        }

           if(h1->val<=h2->val){
                head = h1;
                h1 = h1->next;
           }
           else{
             head = h2;
             h2 = h2->next;
           }
           ListNode *temp = head;
           while(h1&&h2){
              if(h1->val<=h2->val){
                temp->next = h1;
                temp = h1;
                h1 = h1->next;
           }
            else{
                temp->next = h2;
                temp = h2;
                h2 = h2->next;
           }
           }
           if(h1){
             temp->next = h1;
           }
           if(h2){
            temp->next = h2;
           }
           return head;  
    }
};
int main(){

}