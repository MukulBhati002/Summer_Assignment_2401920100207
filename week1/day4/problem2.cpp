#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       vector<vector<int>>mat1(r,vector<int>(c));
       int n = mat.size(),m = mat[0].size(),a = 0,b = 0;
       if(n*m != r*c){
         return mat;
       }
      for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
              if(a<r){
                 if(b<c){
                    mat1[a][b++] = mat[i][j];
                 }
                 else{
                    b = 0;
                    mat1[++a][b++] = mat[i][j];
                 }
              }
        }
      }
      return mat1;
    }
};
int main(){

}