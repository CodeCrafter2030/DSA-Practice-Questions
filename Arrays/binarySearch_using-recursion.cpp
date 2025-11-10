#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int s, int e, int key) {
    // base case: not found
    if (s > e) {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key) {
        return mid;
    }

    if (arr[mid] > key) {
        return binarySearch(arr, size, s, mid - 1, key);
    } else {
        return binarySearch(arr, size, mid + 1, e, key);
    }
}

int main() {
    int arr[] = {1, 3, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = size - 1;
    int key = 7;
    int ans = binarySearch(arr, size, s, e, key);

    if (ans != -1)
        cout << "The number is present at the index: " << ans;
    else
        cout << "Number not found!";

    return 0;
}
