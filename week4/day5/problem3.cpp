#include<bits/stdc++.h>

using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;
};

class Codec {
     void help(TreeNode *root,string &s){
            if(root==NULL){
                s+="N,";
                return;
            }
            s += to_string(root->val)+",";
            help(root->left,s);
            help(root->right,s);
            return;
        }
         TreeNode* help1(string data,int &i,int n){
            if(i>=n){
                return NULL;
            }
            string k = "";
            while(i<n&&data[i]!=','){
                k+=data[i];
                i++;
            }
            if(k =="N"){return NULL;}
            int h = stoi(k);
            TreeNode *nnode = new TreeNode();
            nnode->val = h;
            nnode->left = help1(data,++i,n);
            nnode->right = help1(data,++i,n);
            return nnode;
        }
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
      string s = "";
         help(root,s);
        return s;  
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int n = data.size(),i = 0;
       return help1(data,i,n);
    }
};
int main(){

}