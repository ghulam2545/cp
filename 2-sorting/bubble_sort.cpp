#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
}

int main() {

    int arr[] = {7, 3, 6, 2, 9, 1, 0, 3, 5, 4};

    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    return 0;
}