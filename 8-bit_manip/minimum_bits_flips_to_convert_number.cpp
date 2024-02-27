class Solution {
  public:
    int get(int num, int k) { return (num >> k) & 1; }

    int minBitFlips(int start, int goal) {
        int ans = 0;
        for (int i = 0; i < 32; ++i) {
            if (get(start, i) != get(goal, i))
                ++ans;
        }

        return ans;
    }
};
