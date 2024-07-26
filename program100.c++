// Write a program to reverse the string.
#include<iostream>
using namespace std;

int main() {
    char a[100],b[100];
    int length=0;

    cout <<"Enter the string:";
    cin.getline(a, 100);

    while(a[length]!='\0'){
            length++;
            }
    for(int i=0;i<length;i++){
        b[i]=a[i];
    }
    for(int i=0;i<length;i++){
        cout<<b[i];
    }
    }

