#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long long n = x,sum = 0;
        while(n){
            sum = sum*10 + (n%10);
            n /= 10;
        }
        if(sum == x){
            return true;
        }
        return false;
    }
};

int main(){
    return 0;
}