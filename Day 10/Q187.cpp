#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        if (n < 10) return {};

        unordered_map<string, int> count;
        vector<string> result;

        for (int i = 0; i + 10 <= n; ++i) {
            string substr = s.substr(i, 10);
            if (++count[substr] == 2) {
                result.push_back(substr);
            }
        }

        return result;
    }
};

int main(){
    return 0;
}