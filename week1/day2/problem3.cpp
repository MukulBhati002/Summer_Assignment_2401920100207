#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double ans = INT_MIN,tans = 0;
        for(int i=0;i<k;i++){
            tans+=nums[i];
        }
        ans = max(ans,tans/double(k));
        for(int i=k;i<n;i++){
            tans = tans-nums[i-k];
            tans+=nums[i];
            ans = max(ans,tans/double(k));
        }
        return ans;
    }
};

int main(){


}