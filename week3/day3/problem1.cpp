#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>cont;
        for(char c : s){
            if(c == '('||c == '{'|| c == '['){
                cont.push(c);
            }
           else{
            if(cont.empty()){return false;}
                if(cont.top() == '(' && c != ')'){return false;}
                if(cont.top() == '{' && c != '}'){return false;}
                if(cont.top() == '[' && c != ']'){return false;}
                cont.pop();
            }
        }
        return cont.empty();
    }
};

int main(){

}