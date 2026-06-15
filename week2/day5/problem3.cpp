#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    string longestPalindrome(string s) {
        string ans = "";
        for(int i = 0;i<s.size();i++){
            int l=i,r=i;
            while((l>=0&&r<s.size())&& s[l]==s[r]){
                if(r-l+1>ans.size()){
                    ans = s.substr(l,r-l+1);
                }
                l--;
                r++;
            }
            int l2 = i,r2 = i+1;
            while((l2>=0&&r2<s.size())&& s[l2]==s[r2]){
                 if(r2-l2+1>ans.size()){
                    ans = s.substr(l2,r2-l2+1);
                }
                l2--;
                r2++;
            }
        }
        return ans;
    }
};

int main(){
  
}