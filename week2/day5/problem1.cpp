#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
       int n = strs.size();
       for(int i=0;i<n;i++){
           string k = strs[i];
           sort(k.begin(),k.end());
           mp[k].push_back(strs[i]);
       } 
       vector<vector<string>>ans;
       for(auto it:mp){
         vector<string>temp;
          for(auto st:it.second){
              temp.push_back(st);
          }
          ans.push_back(temp);
       }
       return ans;
    }
};

int main(){

}