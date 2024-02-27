#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int j = i - 1;

        while (j >= 0 && arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            --j;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
}

int main() {

    int arr[] = {9, 3, 8, 4, 7, 3, 7, 7, 1, 2, 5, 6, 0, 2, 9, 7, 3};

    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    return 0;
}