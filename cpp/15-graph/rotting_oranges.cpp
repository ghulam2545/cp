#include <queue>
#include <vector>
using namespace std;

class Solution {
  public:
    pair<int, int> first_rotten(vector<vector<int>> &grid) {
        int r = grid.size();
        int c = grid[0].size();

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (grid[i][j] == 2)
                    return {i, j};
            }
        }
        return {-1, -1};
    }

    bool valid(int x, int y, int r, int c, vector<vector<bool>> &vis) {
        if (x >= 0 && x < r && y >= 0 && y < c && vis[x][y] == false)
            return true;
        return false;
    }

    int orangesRotting(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> rows = {-1, 0, 1, 0};
        vector<int> cols = {0, 1, 0, -1};

        vector<vector<bool>> vis(4, vector<bool>(4, false));

        queue<pair<int, int>> q;
        auto [x, y] = first_rotten(grid);
        if (x == -1)
            return -1;
        q.push({x, y});
        vis[x][y] = true;

        int time = 0;
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            bool unrotten = false;
            for (int i = 0; i < 4; ++i) {
                auto nrow = x + rows[i];
                auto ncol = y + cols[i];
                if (grid[nrow][ncol] == 1)
                    unrotten = true;

                if (valid(nrow, ncol, n, m, vis) && grid[nrow][ncol] == 1) {
                    q.push({nrow, ncol});
                    grid[nrow][ncol] = 0;
                    vis[nrow][ncol] = true;
                }
            }
            if (unrotten)
                ++time;
        }

        bool b = false;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 2) {
                    b = true;
                    break;
                }
            }
        }
        return b == true ? -1 : time;
    }
};

// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos
// todos