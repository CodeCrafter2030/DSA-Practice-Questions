#include<iostream>
using namespace std;

void bubbleSort ( int arr[], int n){
    
    for (int i=1; i<n; i++){ 
        
        for (int j=0; j<(n-i); j++){  // whith each rount the last element become sorted so j<n-i
            
            if (arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main(){
    
    int arr[]={23,1,33,12,2,44,5};
    
    bubbleSort(arr , 7);
    
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}