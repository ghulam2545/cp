#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int rob(vector<int> &nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);

        int ans = nums[1];
        int maxx = -1e9;
        for (int i = 2; i < n; ++i) {
            maxx = max(maxx, nums[i - 2]);
            auto rob = maxx + nums[i];
            ans = max(ans, rob);
            nums[i] = rob;
        }

        return ans;
    }
};

int main() { return 0; }