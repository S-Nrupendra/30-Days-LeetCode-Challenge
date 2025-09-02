#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n){
        long long low = 0,high = n;
        while(low <= high){
            long long mid = (low + high) / 2;
            long long coins = mid * (mid + 1)/2;
            if(coins == n) return mid;
            else if(coins > n){
                high = mid- 1;
            }
            else{
                low = mid + 1;
            }
        }
        return high;
    }
};

int main(){
    return 0;
}