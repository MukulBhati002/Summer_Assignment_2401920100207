#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int r = 0,l = 0,len = 0;
        while(r<s.size()){
           if(seen.find(s[r]) == seen.end()){
              seen.insert(s[r]);
              len = max(len,r-l+1);
              r++;
           }
           else{
            seen.erase(s[l]);
            l++;
           }
        }
        return len;
    }
};



int main(){

}