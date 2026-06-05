#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
         string mxpre = strs[0];

        for(int i = 1; i<n; ++i){
            int j = 0;
            while(j<strs[i].size()&&mxpre[j]==strs[i][j]){
                j++;
            } 
            mxpre = mxpre.substr(0,j); 
        }   
        return mxpre;
    }
};


int main(){

}