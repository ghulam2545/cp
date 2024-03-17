#include <bitset>
#include <iostream>
using namespace std;

/*
 * NOTE: 0 based indexing (rigtht to left)
 */

int get(int num, int k) { return (num >> k) & 1; }
int set(int num, int k) { return num = num | (1 << k); }
int unset(int num, int k) { return num = num & ~(1 << k); }

int main() {
    int num = 3125; // 0000 0000 0000 0000 0000 1100 0011 0101

    cout << get(num, 4, memo) << '\n';                                                // 1
    cout << set(num, 1, memo) << " -- " << bitset<32>(set(num, 1), memo) << '\n';     // 0000 0000 0000 0000 0000 1100 0011 0111
    cout << unset(num, 2, memo) << " -- " << bitset<32>(unset(num, 2), memo) << '\n'; // 0000 0000 0000 0000 0000 1100 0011 0001

    return 0;
}