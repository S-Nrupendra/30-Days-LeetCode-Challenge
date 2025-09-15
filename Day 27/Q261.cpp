#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if (edges.size() != n - 1) return false;

        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n, false);
        queue<int> q;
        q.push(0);
        visited[0] = true;
        int countVisited = 1;

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                    countVisited++;
                }
            }
        }

        return (countVisited == n);
    }
};

int main(){
    return 0;
}