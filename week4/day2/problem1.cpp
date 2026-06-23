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
 void inortr(TreeNode* root,vector<int>&in){
    if(root->left!=NULL){
    inortr(root->left,in);
    }
    in.push_back(root->val);
    if(root->right!=NULL){
    inortr(root->right,in);
    }
 }
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int>in;
      if(root==NULL){return in;}
      inortr(root,in);
      return in;
    }
};

int main(){

    
}