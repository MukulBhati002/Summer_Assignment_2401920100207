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
int height(TreeNode *root){
    if(root == NULL){return 0;}
    int left = height(root->left);
    int right = height(root->right);
    int h = max(left,right)+1;
    return h;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){return 0;}
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int dia = height(root->left)+height(root->right);
        return max(max(left,right),dia);
    }
};

int main(){

}