#include<bits/stdc++.h>
using namespace std;

class NumArray {
    vector<int> a;
public:
    NumArray(vector<int>& nums) {
        int sum = 0;
        for(int n : nums){
            sum += n;
            a.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return a[right];
        else return a[right] - a[left];
    }
};

int main(){
    return 0;
}