#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> a;
    Solution() {
        for (char c = 'a'; c <= 'z'; c++) {
            a.push_back(c);
        }
    }
    char lowerc(char c) {
        if (c >= '0' && c <= '9') {
            return c;
        }
        if (c >= 'a' && c <= 'z') {
            return c;
        }
        return a[c - 'A'];
    }
    bool isPalindrome(string s) {

        int l = 0, r = s.size() - 1;

        while (l < r) {

            if (isalnum(s[l]) && isalnum(s[r])) {
                s[l] = lowerc(s[l]);
                s[r] = lowerc(s[r]);
                if (s[l] != s[r]) {
                    return false;
                }
                l++;
                r--;
            } else if (!isalnum(s[l])) {
                l++;
            } else {
                r--;
            }
        }
        return true;
    }
};

int main(){
    
}
