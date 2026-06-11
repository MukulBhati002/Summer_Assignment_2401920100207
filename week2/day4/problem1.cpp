#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        for(int i=0;i<n;i++){
             int j = i;
            while(i<n&&s[i]!= ' '){
                i++;
            }
            string sub= s.substr(j,i-j);
            reverse(sub.begin(),sub.end());
            ans+=(sub+" ");
        }
        ans.pop_back();
        return ans;
    }
};


int main(){

}