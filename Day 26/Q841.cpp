#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(std::vector<std::vector<int>>& rooms) {
        int n = rooms.size();
        if (n == 0) {
            return true;
        }

        set<int> visited;
        stack<int> s;

        // Start at room 0
        s.push(0);
        visited.insert(0);

        while (!s.empty()) {
            int current_room = s.top();
            s.pop();

            // Get the keys for the current room
            for (int key : rooms[current_room]) {
                if (visited.find(key) == visited.end()) {
                    visited.insert(key);
                    s.push(key);
                }
            }
        }

        return visited.size() == n;
    }
};

int main(){
    return 0;
}