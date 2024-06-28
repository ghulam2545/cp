#include <iostream>
#include <stack>
#include <unordered_set>
#include <vector>
using namespace std;
/*
     1
    * *
   *   *
   2    3
   * *
   *  *
   4* * *5

*/

void dfs(vector<int> adj[], int src) {
    unordered_set<int> vis;
    vis.insert(src);

    stack<int> st;
    st.push(src);

    while (!st.empty()) {
        auto u = st.top();
        st.pop();
        cout << u << ' ';

        // look for neigh
        for (auto &v : adj[u]) {
            if (vis.find(v) == vis.end()) { // not found
                vis.insert(v);
                st.push(v);
            }
        }
    }
}

int main() {
    int n = 5;
    int m = 5;
    vector<pair<int, int>> ls = {{1, 2}, {1, 3}, {2, 4}, {2, 5}, {4, 5}};

    vector<int> adj[n + 1];
    for (auto &[u, v] : ls) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(adj, 1);

    return 0;
}