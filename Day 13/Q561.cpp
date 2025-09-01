#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int sum = 0;
        for(int i = nums.size() - 2;i >= 0;i = i-2){
            sum += nums[i];
        }
        return sum;
    }
};

int main(){
    return 0;
}