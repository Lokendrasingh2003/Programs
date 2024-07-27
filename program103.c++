// Write a function to trim the spaces from both the end in the string.
#include<iostream>
using namespace std;
int function(char a[100],int l){
    char b[100];
    int j=0,c=0,i=0;
    while(a[j]==' '){
        j++;
        }
    for(int i=0;i<l;i++){
        b[i]=a[j];
        j++;
    }
    for(int i=l-1;a[i]==' ';i--){
        b[i]='\0';
    }
    cout<<b;
   
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