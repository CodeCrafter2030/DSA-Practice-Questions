#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    
    for (int i=0; i<n; i++){
        
        for (int j=i+1; j<n; j++){
            
            if (arr[j]<arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}




int main(){
    
    int arr[]={2,3,54,6,33};
    
    selectionSort(arr, 5);
    
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
}