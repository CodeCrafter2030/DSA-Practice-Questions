#include<iostream>
using namespace std;

void saynum(int n , string arr[]){
    if (n == 0){
        return;
    }
    int digit = n%10;
    n=n/10;
    
    saynum(n , arr);
    cout<<endl<<arr[digit]<<" ";
}



int main(){
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout<<"Enter a number :";
    cin>>n;
    saynum(n , arr);
}