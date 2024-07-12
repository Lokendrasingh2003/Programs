// WAP to swap values of two int variables without using third variable.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<" b="<<b;
}