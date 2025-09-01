#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int i,j;
        int count[101] = {0,0,0};
        int n = nums.size();
        for(int i = 0;i < n;i++){
            count[nums[i]]++;
        }
        for(int i = 1;i < 101;i++){
            count[i] += count[i-1];
        }
        for(int i = 0;i < n;i++){
            if(nums[i] == 0){
                answer.push_back(0);
            }
            else{
                answer.push_back(count[nums[i] - 1]);
            }
        }
        return answer;
    }
};

int main(){
    return 0;
}