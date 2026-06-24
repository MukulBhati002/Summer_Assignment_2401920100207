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
   bool isbst(TreeNode *root,long long min,long long max){
        if(root == NULL){return true;}
        if(root->val>=max||root->val<=min){return false;}
return isbst(root->left,min,root->val)&&isbst(root->right,root->val,max);
   }
    bool isValidBST(TreeNode* root) {
       return isbst(root,LLONG_MIN,LLONG_MAX); 
    }
};
int main(){

}