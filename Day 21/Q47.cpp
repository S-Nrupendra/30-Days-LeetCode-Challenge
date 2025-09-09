#include<bits/stdc++.h>
using namespace std;

class Solution {
    void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& path, vector<vector<int>>& res){
        if(path.size() == nums.size()){
            res.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); i++){
            if (used[i]) continue;

            if (i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;

            used[i] = true;
            path.push_back(nums[i]);
            backtrack(nums, used, path, res);
            path.pop_back();
            used[i] = false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> path;
        vector<bool> used(nums.size(),false);

        backtrack(nums,used,path,res);
        return res;
    }
};

int main(){
    return 0;
}