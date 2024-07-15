// WAP to find fibonacci Series of any number.

#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,sum=0;
    cout<<"Enter any number:";
    cin>>n;
    for(int i=1;i<=n-2;i++){
       sum=a+b;
       a=b;
       b=sum;


    }
    cout<<"Fibonacci Series:"<<sum;
}