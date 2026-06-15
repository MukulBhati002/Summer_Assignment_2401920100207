#include<bits/stdc++.h>

using namespace std;

class  ListNode {
 public:
      int val;
      ListNode *next;
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        ListNode* temp2 = head;
        int cnt = 1;
            while(cnt<(count/2)+1){
                temp2 = temp2->next;
                cnt++;
            }
            return temp2;
    }

};

int main(){
    
}