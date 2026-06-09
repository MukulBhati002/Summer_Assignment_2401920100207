#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26,0);
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            string s = s2.substr(i,s1.size());
            vector<int>freqs(26,0);
            for(int i=0;i<s.size();i++){
               freqs[s[i]-'a']++;
            }
            if(freq == freqs){return true;}
        }
        return false;
    }
};



int main(){

}