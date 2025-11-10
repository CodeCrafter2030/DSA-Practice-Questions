#include <iostream>
using namespace std;


int main () 
{
    int arr[7] = {10,499, 20, 30,60, 40, 50};
    int max1=0;
    int max=0;
    for (int i = 0; i < 7; i++) {
        // int max = arr[0];
        if (arr[i] > max) {
            max = arr[i];
        }
        max1=max;
    }
    cout << "Max value is: " <<max1 << endl;
    return 0;
}