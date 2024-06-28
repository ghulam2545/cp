#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
  public:
    void solve(vector<int> &arr, int idx, set<vector<int>> &ans, vector<int> curr) {
        // base case
        if (idx >= arr.size()) {
            sort(curr.begin(), curr.end());
            ans.insert(curr);
            return;
        }
        solve(arr, idx + 1, ans, curr);
        curr.push_back(arr[idx]);
        solve(arr, idx + 1, ans, curr);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        set<vector<int>> ans;
        vector<int> v;
        solve(nums, 0, ans, v);
        vector<vector<int>> ret(ans.begin(), ans.end());
        return ret;
    }
};

int main() { return 0; }