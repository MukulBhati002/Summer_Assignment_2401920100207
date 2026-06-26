#include<bits/stdc++.h>

using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int v){
        val = v;
        right = NULL;
        left = NULL;
    }
};

class Solution {
public:
     int search(vector<int>& inorder,int val,int left,int right){
         for(int i=left;i<=right;i++){
            if(inorder[i]==val){
                return i;
            }
         }
         return -1;
     }
   TreeNode *helper(vector<int>& preorder, vector<int>& inorder,int &preidx,int left,int right){
         if(left>right){
            return NULL;
         }
        TreeNode *root = new TreeNode(preorder[preidx]);
        int inidx = search(inorder,preorder[preidx],left,right);
        preidx++;
        root->left = helper(preorder,inorder,preidx,left,inidx-1);
        root->right = helper(preorder,inorder,preidx,inidx+1,right);
        return root;
   }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx = 0;
        return helper(preorder,inorder,preidx,0,inorder.size()-1);
    }

};

int main(){

}