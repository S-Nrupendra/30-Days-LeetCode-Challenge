#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> c;
        vector<int> nums;
        for(int i = 0;i < nums1.size();i++){
            c[nums1[i]]++;
        }
        for(int n : nums2){
            if(c[n] > 0){
                nums.push_back(n);
                c[n]--;
            }
        }

        return nums;
    }
};

int main(){
    return 0;
}