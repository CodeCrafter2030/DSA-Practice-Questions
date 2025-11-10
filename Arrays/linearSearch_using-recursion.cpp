#include<iostream> 
using namespace std;

bool linearSearch(int arr[] , int size ,int key ){
   if (size == 0){
       return false;
   }
   if (arr[0] == key){
       return true;
   }
   else{
       return linearSearch(arr+1 ,size-1, key);
       
   }
}

int main(){
    int arr[] = {1,34,5,6,64,5};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    
    bool ans = linearSearch(arr , size ,key);
    if (ans){
        cout<<"The number is present in the array!! ";
    }
    else{
        cout<<"Opss!! , The number is not present in the array ";
    }
    
    
    return 0;
}