//program to print an array through function 

#include <iostream>
#include <math.h>
using namespace std;

// function to print sum of array 
int sumArray (int arr[], int size)
{
    int sum=0;
    for (int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    cout << "sum of all element of array is : "<< sum <<endl;
    
    return 0;
}

int printArray (int arr[], int size)
{
    for ( int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    
    cout<<"Printing done !!"<<endl;
    return 0;
}


int main()
{
    int arr[5]={1,2,3,4,5};
    printArray(arr , 5);
    sumArray(arr,5);
    return 0;
}