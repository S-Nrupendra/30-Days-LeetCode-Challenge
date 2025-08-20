#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) {
        vector<int> c = a;
        for(int i = 0;i < a.size();i++){
            c.push_back(a[i]);
        }
        return c;
    }
};

int main(){
    return 0;
}