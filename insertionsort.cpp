#include<iostream>
using namespace std;

void insertionSort( int arr[] , int n){
    
    for (int i=1; i<n; i++){
        
        int temp=arr[i];
        int j =i-1;
        
        
        for (; j>=0; j-- ){
            
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        
        arr[j+1]=temp;
    }
}

int main(){
    
    int arr[]={23,1,33,12,2,44,5};
    
    insertionSort(arr , 7);
    
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}