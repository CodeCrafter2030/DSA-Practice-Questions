#include <iostream>
using namespace std;

void sortArr(int arr[], int n) {
    if (n == 0 || n == 1)
        return;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            swap(arr[i - 1], arr[i]);
        }
    }

    // Recursive call for remaining array
    sortArr(arr, n - 1);
}

int main() {
    int arr[] = {11, 2, 33, 4, 1, 5};
    int size = 6;

    sortArr(arr, size);
    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

