#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
  bool check(string s){
      if(s>="0"&&s<="9"){
        return true;
      }
      return false;
  }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
    if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int a,b;
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                if(tokens[i]=="+"){
                    st.push(a+b);
                }
                else if(tokens[i]=="-"){
                    st.push(b-a);
                }
                else if(tokens[i]=="*"){
                    st.push(a*b);
                }
                else if(tokens[i]=="/"){
                    st.push(b/a);
                }
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
int main(){
    
}