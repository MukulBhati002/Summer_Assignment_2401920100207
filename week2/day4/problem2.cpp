#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
       string currst = "";
       int n = s.size(),nums = 0;
       stack<int>num;
       stack<string>st;
       for(int i=0;i<n;i++){
          if(isdigit(s[i])){
             nums = nums*10+(s[i]-'0');
          }
          else if(s[i]=='['){
             num.push(nums);
             nums = 0;
             st.push(currst);
             currst = "";
          }
          else if(s[i]==']'){
            string d = st.top();
            st.pop();
            int o = num.top();
            num.pop();
              while(o>0){
                  d+=currst;
                  o--;
              }
              currst = d;
          }
          else{
             currst +=s[i];
          }
       } 
       return currst;
    }
};


int main(){
    
}