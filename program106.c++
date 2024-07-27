// Write a function to do case insensitive comparison of two string.
#include<iostream>
using namespace std;
int function(char a[100],char b[100],int l){
    int c=0;
    for(int i=0;i<l;i++){
        if(toupper(a[i])!=toupper(b[i])){
            c++;
            break;

        }
    }
    if(c==0){
        cout<<"Given string is same";
    }
    else{
        cout<<"Given string is not same";
    }
   
}
int main(){
    char a[100],b[100];
    int l=0,result;
    cout<<"Enter the string:";
    cin.getline(a,100);
    cout<<"Enter the another string:";
    cin.getline(b,100);
    while(a[l]!='\0'){
        l++;
    }
    function(a,b,l);
}