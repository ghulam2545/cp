#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool valid(int x, int y, int r, int c, vector<vector<bool>> &vis) {
    if (x >= 0 && x < r && y >= 0 && y < c && vis[x][y] == false)
        return true;
    return false;
}

void bfs_on_grid(vector<vector<int>> mat) {
    vector<int> rows = {-1, 0, 1, 0};
    vector<int> cols = {0, 1, 0, -1};

    vector<vector<bool>> vis(4, vector<bool>(4, false));

    queue<pair<int, int>> q;
    q.push({0, 0});
    vis[0][0] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        cout << mat[x][y] << ' ';

        for (int i = 0; i < 4; ++i) {
            auto nrow = x + rows[i];
            auto ncol = y + cols[i];

            if (valid(nrow, ncol, 4, 4, vis)) {
                q.push({nrow, ncol});
                vis[nrow][ncol] = true;
            }
        }
    }
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    bfs_on_grid(mat);

    return 0;
}