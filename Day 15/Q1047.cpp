#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<pair<char,int>> st;
        for(char c : s){
            if(!st.empty() && st.top().first == c){
                st.top().second++;
            }
            else{
                if(st.top().second > 1) st.pop();
                st.push({c,1});
            }
        }
        string res;
        while(!st.empty()){
            res.insert(0,st.top().second,st.top().first);
            st.pop();
        }

        return res;
    }
};

int main(){
    return 0;
}