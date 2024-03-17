#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // TLE
    int maxArea(vector<int> &arr) {
        int n = arr.size();
        int ans = 0;

        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                auto gap = j - i;
                auto curr = gap * min(arr[i], arr[j]);
                ans = max(ans, curr);
                cout << i << ' ' << j << ' ' << ans << '\n';
            }
        }
        return ans;
    }
};

class Solution {
  public:
    // moving smaller hight gives more water/area (guaranteed)
    int maxArea(vector<int> &arr) {
        int n = arr.size();
        int left = 0;
        int right = n - 1;

        int ans = 0;
        while (left < right) {
            auto gap = right - left;
            auto curr = gap * min(arr[left], arr[right]);
            ans = max(ans, curr);

            if (arr[left] <= arr[right])
                ++left;
            else
                --right;
        }
        return ans;
    }
};

int main() { return 0; }