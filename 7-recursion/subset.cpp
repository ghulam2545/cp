#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void solve(vector<int> &nums, int idx, vector<vector<int>> &ans, vector<int> v) {
        if (idx >= nums.size()) {
            ans.push_back(v);
            return;
        }

        solve(nums, idx + 1, ans, v); // dont include

        v.push_back(nums[idx]);
        solve(nums, idx + 1, ans, v); // include
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(nums, 0, ans, v);

        return ans;
    }
};

int main() { return 0; }