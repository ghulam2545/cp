#include <stack>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
  public:
    void dfs(vector<int> adj[], int src, unordered_set<int> &vis) {
        vis.insert(src);
        stack<int> st;
        st.push(src);

        while (!st.empty()) {
            auto u = st.top();
            st.pop();
            // cout << u << ' ';

            // look for neigh
            for (auto &v : adj[u]) {
                if (vis.find(v) == vis.end()) { // not found
                    vis.insert(v);
                    st.push(v);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];

        // create graph from 2D matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int ans = 0;
        unordered_set<int> vis;
        for (int i = 0; i < n; ++i) {
            if (vis.count(i) == 0) {
                ++ans;
                dfs(adj, i, vis);
            }
        }

        return ans;
    }
};