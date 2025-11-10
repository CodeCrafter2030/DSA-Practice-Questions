//program to reverse an array 

#include<iostream>
#include<math.h>
using namespace std;

int reverseArray (int arr[], int size){
    
    int reversedArray[size];

    cout<<"Reversed array is : " ;
    
    for (int i=0; i<size; i++){
        
        reversedArray[i] = arr[(size - 1) - i];
        
        cout<<reversedArray[i] << " ";
    }
    return 0;
}

//Another function to reverse an array 
void reverse (int arr[], int size){
    
    int start=0;
    int end= size-1;
    
    while (start<=end){
        
         // Use a temporary variable to swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

void printArray(int arr[] , int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    int arr[5] = {10,23,45,2,4};
    
    reverse(arr , 5);
    printArray(arr , 5);
    
    return 0;
}