#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>s;
        vector<int>l(n);
        vector<int>r(n);
        for(int i = n-1;i>=0;i--){
            while(s.size()>0&&heights[i]<=heights[s.top()]){
                s.pop();
            }
            if(s.empty()){
                r[i] = n;
            }
            else{
                r[i] = s.top();
            }
            s.push(i);
        }
        while(!s.empty()){s.pop();}
        for(int i = 0;i<n;i++){
            while(s.size()>0&&heights[i]<=heights[s.top()]){
                s.pop();
            }
            if(s.empty()){
                l[i] = -1;
            }
            else{
                l[i] = s.top();
            }
            s.push(i);
        }
        long long area = 0,tarea;
        for(int i = 0;i<n;i++){
            tarea = heights[i]*(r[i]-l[i]-1);
            area = max(area,tarea);
        }
        return area;
    }
};

int main(){
    
}