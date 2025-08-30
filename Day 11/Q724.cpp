#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int n = nums.size();

        vector<int> ls(n,0),rs(n,0);
        long long sum = 0;
        for(int i = 1;i < n;i++){
            sum += nums[i-1];
            ls[i] = sum;
        }
        sum = 0;
        for(int i = n-2;i >= 0;i--){
            sum += nums[i+1];
            rs[i] = sum;
        }

        for(int i = 0;i < n;i++){
            if(ls[i] == rs[i]){
                return i;
                break;
            }
        }
        return -1;
    }
};

int main(){
    return 0;
}