#include<iostream>
using namespace std;

double morePrecision (int n , int digit, int tempSol){
    
    double ans = tempSol;
    double factor=1;
    
    for (int i=1; i<=digit; i++){
        
        factor=factor/10.0;
        
        for (double j=ans; (j*j)<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n =37;
    cout<<"Square root of 37 is : "<<morePrecision(n,9,6);
}