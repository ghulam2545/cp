#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> power_set(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> ans;

    for (int num = 0; num < (1 << n); ++num) {

        vector<int> v;
        for (int b = 0; b < n; ++b) {
            auto k = (num >> b) & 1;
            if (k)
                v.push_back(arr[b]);
        }

        ans.push_back(v);
    }

    return ans;
}

int main() {

    vector<int> arr = {3, 4, 5};

    auto ans = power_set(arr);

    for (auto &vals : ans) {
        for (auto &e : vals)
            cout << e << ' ';
        cout << '\n';
    }
    return 0;
}