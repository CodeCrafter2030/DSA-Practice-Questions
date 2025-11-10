#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size){
    if (size==0 || size==1){
        return true;
    }
    if (arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1 , size-1);
    }
}



int main(){
    int arr[]={1,5,3,4,5};
    
    bool ans = isSorted(arr , 5);
    
    if (ans){
        cout<<"array is sorted ";
    }
    else{
        cout<<"array is not sorted ";
    }
}