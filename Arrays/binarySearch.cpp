// #include <iostream>
// using namespace std;

// int main ()
// {
//     int start=0;
    
//     int key =7;
    
//     int arr[] = {2,4,6,7,9};
//     int n = (sizeof(arr)/sizeof(arr[0]));
//     int end = n-1;
    
//     int mid=(start+end)/2;
    
//     // cout<<n;
    
//     for (int i=0; i<n; i++){
        
//         if (arr[mid]==key){
//             cout<<"The key element is present at index : "<<mid;
//             break;
//         }
        
//         if (key>arr[mid]){
//             start=mid+1;
//             mid=(start+end)/2;
//         }
        
//         if (key<arr[mid]){
//             end=mid-1;
//             mid=(start+end)/2;
//             // cout<<"The key element is present at index : "<<mid;
//         }
        
//         start++;
//         // end--;
//     }
// }


// Second implementation of binary search 
#include <iostream>
using namespace std;

// Second implementation of binary search 
#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    while (start<=end){
        
        int mid=start+(end-start)/2;
        
        if (key==arr[mid]){
            end=mid-1;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

       mid=start+(end-start)/2;
    }
   return -1;
}

int lastOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    while (start<=end){
        
        int mid=start+(end-start)/2;
        
        if (key==arr[mid]){
            return mid;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

       mid=start+(end-start)/2;
    }
   return -1;
}


