#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(),s=0,e = n-1;
         vector<int>ans;
         while(s<e){
            if((nums[s]*nums[s])<(nums[e]*nums[e])){
            ans.push_back((nums[e]*nums[e]));
              e--;
            }
            else if((nums[s]*nums[s])>(nums[e]*nums[e])){
                ans.push_back((nums[s]*nums[s])); 
                 s++;
            }
            else{
                ans.push_back((nums[s]*nums[s]));
                ans.push_back((nums[s]*nums[s]));
                s++;
                e--;
            }
         }
         if(e==s){
            ans.push_back((nums[s]*nums[s]));
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};



int main(){

}