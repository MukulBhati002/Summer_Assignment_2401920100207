#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()){
            return {};
        }
      vector<int>ans;
      vector<int>freq(26,0);
      int k = p.size(),n = s.size();
      for(int i=0;i<k;i++){
         freq[p[i]-'a']++;
      } 
        vector<int>freq1(26,0);
          for(int j = 0;j<k;j++){
             freq1[s[j]-'a']++;
          }
          if(freq==freq1){
            ans.push_back(0);
          }
       for(int i=k;i<n;i++){
           freq1[s[i-k]-'a']--;
           freq1[s[i]-'a']++;
          if(freq==freq1){
            ans.push_back(i-k+1);
          }
       }
      return ans; 
    }
};



int main(){
    
}