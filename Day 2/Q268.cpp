#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums){
        int n = nums.size();
        long long sum = 0;
        if(n % 2 == 0){
            sum = n/2;
            sum *= (n + 1);
        }
        else{
            sum = (n + 1)/2;
            sum *= n;
        }
        for(int i = 0;i < n;i++){
            sum -= nums[i];
        }
        return sum;
    }
};

int main(){
    return 0;
}