#include<iostream>
using namespace std;


char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    

    return 'a'+ans;

}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    char ans = getMaxOccCharacter(s);
    cout<<"Max occuring character is : "<<ans<<endl;
}


// Brute Force Approach to get the count of each character
/*#include<iostream>
using namespace std;

int main(){
    string s= "tesst";
    
    for (int i=0; i<s.length(); i++){
        int count=1;
        for (int j=i+1; j<s.length(); j++){
            if (s[i]==s[j]){
              count++ ;
            }
        }
        cout<<"the count of "<<s[i]<<" is : "<<count<<endl;
    }
}*/