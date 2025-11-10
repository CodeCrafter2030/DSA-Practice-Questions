#include <iostream>
#include <climits>
using namespace std;

int max_num(int arr[] , int size){
    int max=INT_MIN;
    
    for(int i=0; i<size; i++){
        // max = max(arr[i] , max); in build fuction to find maximum numer from two numbers
        if (arr[i] > max){
            max=arr[i];
        }
    }
    cout<<"Maximum value is : ";
    return max;
}

int min_num(int arr[] , int size){
    int min=INT_MAX;
    
    for(int i=0; i<size; i++){
        // min = min (arr[i] , min);  in build fuction to find minimum numer from two numbers
        if (arr[i] < min){
            min=arr[i];
        }
    }
    cout<<"Minimum value is : ";
    return min;
}



int main(){

      int num[5]={12,2,33,4222,1};
      cout<<max_num(num , 5)<<endl;
      cout<<min_num(num ,5)<<endl;
      
}