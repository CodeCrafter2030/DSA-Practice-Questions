#include <iostream>
using namespace std;

string reverse(string str, int s , int e){
    //base condition
    if (s>e){
        return str;
    }
    else{
        swap(str[s] ,str[e]);
    }
    
    return reverse(str, s+1 , e-1);
}


int main(){
    string str = "lalit";
    int s=0;
    int e = str.size()-1;
    string ans = reverse(str , s, e);
    cout<<ans;
}