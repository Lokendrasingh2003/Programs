// WAP to swap values of two int variables without using third variable and without using +,- operators.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"the value of a:"<<a;
    cout<<"and value of b:"<<b;
}