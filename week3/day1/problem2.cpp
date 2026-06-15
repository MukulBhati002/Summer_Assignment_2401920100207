#include<bits/stdc++.h>

using namespace std;
class  ListNode {
 public:
      int val;
      ListNode *next;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
         ListNode* curr = head;
        ListNode* nex = NULL;

        while(curr!=NULL){
            nex = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nex;
        }
        return pre;
    }
};


int main(){
    
}