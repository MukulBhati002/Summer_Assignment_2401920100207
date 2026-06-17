#include<bits/stdc++.h>

using namespace std;

class MinStack {
public:
    vector<int>st;
    vector<int>minst;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push_back(value);
        if(!minst.empty()){
            value = min(value,minst.back());
        }
        minst.push_back(value);
    }
    
    void pop() {
        st.pop_back();
        minst.pop_back();
    }
    
    int top() {
         return st.back();
    }
    
    int getMin() {
        
        return minst.back();
    }
};


int main(){
    
}