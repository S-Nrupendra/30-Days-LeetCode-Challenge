#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> visited(n, false);
        int components = 0;

        function<void(int)> dfs = [&](int u) {
            visited[u] = true;
            for (int v : adj[u]) {
                if (!visited[v]) dfs(v);
            }
        };

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                components++;
                dfs(i);
            }
        }

        return components;
    }
};

int main(){
    return 0;
}