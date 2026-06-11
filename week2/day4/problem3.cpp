#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
  void recursion(string s,int n,int open,int close,vector<string>&ans){
        if(open==n&&close==n){
           ans.push_back(s);
        }
        if(open<n){
            s = s+"(";
            recursion(s,n,open+1,close,ans);
            s.pop_back();
        }
        if(close<open){
            s = s+")";
            recursion(s,n,open,close+1,ans);
        }
  }
    vector<string> generateParenthesis(int n) {
         vector<string>ans;
         string s = "";
         recursion(s,n,0,0,ans);
         return ans;
    }
};


int main(){
    
}