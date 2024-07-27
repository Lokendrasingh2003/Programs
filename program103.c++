// Write a function to find the string is palindrom or not.
#include<iostream>
using namespace std;
int function(char a[100],int l){
    char b[100];
    int j=0,c=0;
    for(int i=l-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    for(int i=0;i<l;i++){
        if(a[i]!=b[i]){
            cout<<"Given string is not palindrom.";
            c++;
            break;
        }

    }
    if(c==0){
        cout<<"Given string is palindrom.";
    }
}
int main(){
    char a[100];
    int l=0,result;
    cout<<"Enter the string:";
    cin.getline(a,100);
    while(a[l]!='\0'){
        l++;
    }
    function(a,l);
}