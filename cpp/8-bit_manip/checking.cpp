#include <iostream>
using namespace std;

/*
 * NOTE: 0 based indexing (rigtht to left)
 */

bool set_or_unset(int num, int k) { return (num >> k) & 1; }
string odd_even(int num) { return num & 1 ? "odd" : "even"; }
bool power_of_two(int num) { return ((num) & (num - 1)) == 0; } // excludes - 0

int main() {

    int num = 3125; // 0000 0000 0000 0000 0000 1100 0011 0101
    return 0;
}