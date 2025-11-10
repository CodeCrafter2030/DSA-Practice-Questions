// Program to find an element in array using linear search 

#include <iostream>
using namespace std;

int linearSearch ( int arr[], int size ,  int num){
    
    for ( int i=0; i<size; i++){
        
        if (num == arr[i]){
            cout<<"Number found at index : "<<i<<endl;
        }
    }
    
    return 0;
}

int main(){
    
    int num[5] = {10,23,45,2,4};
    
    linearSearch(num , 5, 45);
}