#include<bits/stdc++.h>
using namespace std;

class RecentCounter {
    vector<int> v;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        v.push_back(t);
        int c = 0, min = t - 3000, max = t;
        for(int i = 0;i < v.size();i++){
            if(v[i] >= min && v[i] <= max){
                c++;
            }
        }
        return c;
    }
};

int main(){
    return 0;
}