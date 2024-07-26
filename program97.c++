// Write a program to convert the given string in uppercase.
#include<iostream>
using namespace std;

int main() {
    char a[100];
    int length=0;

    cout <<"Enter the string:";
    cin.getline(a, 100);

    while(a[length]!='\0'){
        if(a[length]==' '){
            a[length]=a[length];
            length++;
            }
             a[length]=toupper(a[length]);
             length++;
            }

        cout<<a;

       
    }

