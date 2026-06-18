#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>st;
        int n = temperatures.size();
        vector<int>ans(n,0);
          int max = INT_MIN;
        for(int i=n-1;i>=0;i--){
            
         while(!st.empty()&& temperatures[i]>=temperatures[st.back()]){
                 st.pop_back();
            } 
            if(!st.empty()){
               ans[i] = st.back()-i;
            }
                st.push_back(i);
        }
        return ans;
    }
};

int main(){
    
}