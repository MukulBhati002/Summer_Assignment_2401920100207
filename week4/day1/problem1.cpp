#include<bits/stdc++.h>

using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
public:
int helper(TreeNode *root,int level,int &ans){
     if(root == NULL){
        return 0;
     }
     ans = max(level,ans);
     helper(root->left,level+1,ans);
     helper(root->right,level+1,ans);
     return ans;
}
    int maxDepth(TreeNode* root) {
        int ans = 0;
        return helper(root,1,ans);
        
    }
};

int main(){
    
}