#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1,n = nums.size();
        if(n==1){return 1;}
        for(int i=1;i<n;i++){
            while(i<n&&nums[i]==nums[i-1]){
                i++;
            }
            if(i<n){
            nums[k] = nums[i];
            k++;
            }
        }
        return k;
    }
};



int main(){

}