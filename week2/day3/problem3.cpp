#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                string sub = s.substr(0,i),s2 = sub;
              int h = (n/i)-1;
              while(h>0){
                sub+=s2;
                h--;
              }
              if(sub==s){
                return true;
              }
            }
        }
        return false;
    }
};

int main(){
    
}