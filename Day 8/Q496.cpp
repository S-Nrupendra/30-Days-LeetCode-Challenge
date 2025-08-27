#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0;i < nums1.size();i++){
            int k;
            for(int j = 0;j < nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    k = j;
                    break;
                }
            }
            for(;k < nums2.size();k++){
                if(nums2[k] > nums1[i]){
                    ans.push_back(nums2[k]);
                    break;
                }
            }
            if(k >= nums2.size()) ans.push_back(-1);
        }
        return ans;
    }
};

int main(){
    return 0;
}