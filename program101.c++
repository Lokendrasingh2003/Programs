// Write a program to compare the string.
#include<iostream>
using namespace std;


int main(){
    char a[100],b[100];
    int length_a=0,length_b=0,c=0;
    cout<<"Enter a string:";
    cin.getline(a,100);
    cout<<"Enter another string:";
    cin.getline(b,100);
    while(a[length_a]!='\0'){
        length_a++;
    }
    while(b[length_b]!='\0'){
        length_b++;
        }
    for(int i=0;i<length_a;i++){
       if(a[length_a]!=b[length_a]){
          c++;
       }
    }
    if(c==0){
        cout<<"The strings are equal.";
    }
    else{
        cout<<"The strings are not equal.";
    }
}

