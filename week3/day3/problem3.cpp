#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size(),k = nums1.size();
        stack<int>s;
        vector<int>ans(k);
        unordered_map<int,int>m;
        for(int i = n-1;i>=0;i--){

            while(s.size()>0 && nums2[i]>s.top()){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]] = -1;
            }
            else{
                m[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
       for(int i = 0;i<k;i++){
              ans[i] = m[nums1[i]];
           
       }
        return ans;
    }
};
int main(){
    
}