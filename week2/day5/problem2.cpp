#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
  
    int compress(vector<char>& chars) {
        int n = chars.size(),ans =0,j = 0;
       for(int i=0;i<n;){
           int l = 0,h = i;
          while(i<n&&chars[h]==chars[i]){
            i++;
            l++;
          }
          chars[j++] = chars[h];
          if(l==1){continue;}
            string num = to_string(l);
            for(char ch:num){
                chars[j++] = ch;
            }
       } 
       return j;
    }
};
int main(){

}