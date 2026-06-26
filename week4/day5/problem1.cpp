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
bool preorder(TreeNode *root1, TreeNode *root2){
      if(root1 == NULL && root2 == NULL){return true;}
      if(root1 == NULL || root2 == NULL){return false;}

      if(root1->val != root2->val){
        return false;
      }
      return preorder(root1->left,root2->right)&&preorder(root1->right,root2->left);

}
    bool isSymmetric(TreeNode* root) {
        return preorder(root->left,root->right);
    }
};

int main(){

}