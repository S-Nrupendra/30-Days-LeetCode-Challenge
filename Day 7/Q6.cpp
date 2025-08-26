#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> a(numRows,"");
        int k = 0;
        while(k < s.size()){
            for(int i = 0;i < numRows && k < s.size();i++){
                a[i] += s[k];
                k++;
            }
            for(int i = numRows-2;i > 0 && k < s.size();i--){
                a[i] += s[k];
                k++;
            }
        }
        string res = "";
        for(int i = 0;i < a.size();i++){
            res += a[i];
        }

        return res;
    }
};

int main(){
    return 0;
}