#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    // Base case
    if (size == 0) {
        return 0;
    }

    // Recursive case
    int remainingSum = sum(arr + 1, size - 1);
    int total = arr[0] + remainingSum;

    return total;
}

int main() {
    int arr[] = {4, 2, 5, 6, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int ans = sum(arr, size);
    cout << "The sum of all the elements in the array is: " << ans << endl;

    return 0;
}
