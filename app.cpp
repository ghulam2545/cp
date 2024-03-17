#include <iostream>

int countDigitOne(int n) {
    int count = 0;
    for (int i = 1; i <= n; i *= 10) {
        int divider = i * 10;
        count += (n / divider) * i + std::min(std::max(n % divider - i + 1, 0), i);
    }
    return count;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    int count = countDigitOne(number);
    std::cout << "Number of digit one in " << number << ": " << count << std::endl;
    return 0;
}
