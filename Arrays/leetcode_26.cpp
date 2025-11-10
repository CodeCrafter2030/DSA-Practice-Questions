// 26. Remove Duplicates from Sorted Array

#include <iostream>
using namespace std;

int main()
{
    int arr[]= {1,2,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    
    
    int ans[size];
    
    for (int i=0; i<size; i++){
        
        for (int j=i+1; j<size; j++){
            
            if (arr[i]==arr[j]){
                cout <<"dupicate element "<<endl;
                ans[i]=arr[i];
            }
            
            else {
                ans[i]=arr[i]; 
            }
        }
    }
    
    for (int i=0; i<size; i++){
        cout<<ans[i]<<" ";
    }
}