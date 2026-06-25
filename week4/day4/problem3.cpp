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
  int help(TreeNode* root,int &res){
     if(root==NULL){
        return 0;
     }
     int l = help(root->left,res);
     int r = help(root->right,res);
     res = max({res,l+r+root->val,root->val+l,root->val+r,root->val});
     return max(max(l,r)+root->val,root->val);
  }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        help(root,res);
        return res;
    }
};
int main(){

}