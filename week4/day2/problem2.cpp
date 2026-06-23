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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>>ans;
      if(root == NULL){return ans;}
      queue<TreeNode*>q;
       q.push(root);
       while(q.size()>0){
          int level = q.size();
          vector<int>temp;
          for(int i=0;i<level;i++){
                TreeNode *curr = q.front();
                temp.push_back(curr->val);
                q.pop();
                if(curr->left!=NULL){q.push(curr->left);}
                if(curr->right!=NULL){q.push(curr->right);}
          }
          ans.push_back(temp);
       }  
       return ans;
    }
};
int main(){

    
}