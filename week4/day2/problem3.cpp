#include<bits/stdc++.h>

using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;
};
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        int k = 1;
        deque<TreeNode*>q;
        q.push_back(root);
        while(q.size()>0){
            int l = q.size();
            vector<int>temp;
            
         for(int i=0;i<l;i++){
           TreeNode *curr = q.front();
                 temp.push_back(curr->val);
                q.pop_front();
                if(curr->left!=NULL){q.push_back(curr->left);}
                if(curr->right!=NULL){q.push_back(curr->right);}
              
            }
            if(k%2==0){
               reverse(temp.begin(),temp.end());
            }
            ans.push_back(temp);
            k++;
        }
        return ans;
         
    }
};


int main(){


}