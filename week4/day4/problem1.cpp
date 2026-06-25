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
bool solve(TreeNode* root, int targetSum){
      if(root==NULL){return false;}
      if(root->left==NULL&&root->right==NULL){
           targetSum-=root->val;
             if(targetSum==0){
                return true;
             }
             return false;
         }
        return solve(root->left,targetSum-root->val)||solve(root->right,targetSum-root->val);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
         if(root==NULL){return false;}
         return solve(root,targetSum);
    }
};

int main(){

}