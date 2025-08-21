#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int n : nums){
            if(a.count(n) == 0){
                a.insert(n);
            }
            else{
                return true;
            }
        }
        return false;
    }
};

int main(){
    return 0;
}