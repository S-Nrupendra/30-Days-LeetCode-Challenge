#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return n;

        int longest = 1;
        unordered_set<int> st(nums.begin(),nums.end());

        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x + 1) != st.end()){
                    x = x+1;
                    cnt += 1;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};

int main(){
    return 0;
}