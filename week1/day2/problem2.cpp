#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int maxfreq = 0,n = nums.size();
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
           maxfreq = max(maxfreq,mp[nums[i]]);
        }
        if(maxfreq==1){
            return false;
        }
        return true;
    }
};



int main(){

}