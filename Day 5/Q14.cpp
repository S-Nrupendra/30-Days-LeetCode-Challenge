#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];

        string ans = strs[0];
        for(int k = 1;k < strs.size();k++){
            int i = 0,j = 0;
            string ans2 = "";
            while(strs[k][i] == ans[j] && i < strs[k].size() && j < ans.size()){
                ans2 += strs[k][i];
                i++,j++;
            }
            ans = ans2;
        }
        return ans;
    }
};

int main(){
    return 0;
}