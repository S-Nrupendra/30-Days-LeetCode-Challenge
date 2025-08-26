#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a + b > b + a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> res;
        for(int n : nums){
            res.push_back(to_string(n));
        }

        sort(res.begin(),res.end(),compare);

        if(res[0] == "0") return "0";

        string a = "";
        for(string s : res){
            a += s;
        }
        return a;
    }
};

int main(){
    return 0;
}