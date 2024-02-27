#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool valid(int x, int y, int row, int col) {
    if (x >= 0 && x < row && y >= 0 && y < col)
        return true;
    return false;
}

int main() {

    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<vector<bool>> vis(4, vector<bool>(4, false));
    vis[0][0] = false;

    vector<int> rows = {1, 0, -1, 0};
    vector<int> cols = {0, -1, 0, 1};

    queue<pair<int, int>> q;
    q.push({0, 0});

    while (q.size()) {
        auto top = q.front();
        q.pop();

        auto r = top.first;
        auto c = top.second;
        cout << mat[r][c] << ' ';

        for (int i = 0; i < 4; ++i) {
            auto nrow = r + rows[i];
            auto ncol = c + cols[i];

            if (valid(nrow, ncol, 4, 4) && !vis[nrow][ncol]) {
                vis[r][c] = true;
                q.push({nrow, ncol});
            }
        }
    }

    return 0;
}