// Write a program to find the length of the string.
#include<iostream>
using namespace std;
int main(){
    char a[100];
    int length=0;
    cout<<"Enter the string:";
    cin.getline(a,100);

    while(a[length]!='\0'){
        length++;
    }
    cout<<"The length of the string is "<<length;

}