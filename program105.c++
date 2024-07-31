// Write a function to count the words in the string.
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
    l=0;
    c=0;
    while(b[l]!='\0'){
        l++;
    }
    for(int i=0;i<l;i++){
        if(b[i]==' '){
            if(b[i+1]==' ')
            {
                continue;
            }
            else{
                c++;
            }
    }
    }

    cout<<"There are total numbers of words in given string are:"<<c+1;
   
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