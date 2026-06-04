#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
         int sum = 0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
        }
        for(int i=n-1;i>=0;i--){
            if(i!=n-1-i){
            sum+=mat[i][n-1-i];
            }
        }
        return sum;
    }
};

int main(){

    
}