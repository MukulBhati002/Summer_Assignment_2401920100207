#include<bits/stdc++.h>

using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head,*temp2 = head;
        int c = 0;
        while(temp!=NULL){
            temp = temp->next;
            c++;
        }
        if(c == n){
            head = head->next;
            return head;
        }
        int k = c-n,j=1;
        while(j<k){
           temp2 = temp2->next;
           j++;
        }
        if(temp2->next != NULL && temp2->next->next !=NULL){
            temp2->next = temp2->next->next;
        }
        else if(temp2->next != NULL &&temp2->next->next == NULL){
            temp2->next = NULL;
        }
        else{
             return NULL;
        }
        return head;
    }
};

int main(){
    
}