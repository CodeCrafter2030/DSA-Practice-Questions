#include<iostream>
using namespace std;


bool isFound(int arr[][3] , int k){
        for (int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if (arr[i][j]==k){
                    return 1;
                }
            }
        }
        return 0;
    }
    
    
int main(){
    
    int arr[3] [3] = {{1,2,3},{5,7,8},{9,10,11}};
    int k;
    cout<<"Enter the element to be searched : ";
    cin>>k;
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if (isFound(arr,k)){
        cout<<"Element is found!!";
    }
    else{
        cout<<"Element is not present in array ";
    }
}