#include<bits/stdc++.h>

using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
       int* arr = new int[count];
       int ith = 0;
       while(head != NULL){
         arr[ith++] = head->val;
         head = head->next;
       }
       int i = 0 , j = count-1;
       while(i<j){
         if(arr[j]!=arr[i]){
            return false;
         }
         i++;
         j--;
       }
       return true;
    }
};

int main(){
    
}