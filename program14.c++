// // WAP to swap values of two int variables without using third variable in single line.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    a=a+b-(b=a);
    cout<<"After Swapping the value of A:"<<a<<endl;
    cout<<"After Swapping the value of B:"<<b<<endl;
}