#include<bits/stdc++.h>
using namespace std;

class Solution {
    int fun(vector<int>& weight, int cap){
        int load = 0,day = 1;
        for(int n : weight){
            if(load + n > cap){
                day++,load = n;
            }
            else{
                load += n;
            }
        }
        return day;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low <= high){
            int mid = (low + high) / 2;
            if(fun(weights,mid) <= days){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

int main(){
    return 0;
}