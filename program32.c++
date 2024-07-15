// WAP to check whether a given number is there in the fibonacii series or not

#include<iostream>
using namespace std;
int main(){
    int n,a=-1,b=1,sum=0,c=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<=n+5;i++){
        sum=a+b;
        a=b;
        b=sum;
        if(n==b){
            cout<<"The number is a fibonacci number";
            c=c+1;
        }
    }
    if(c==0)
    cout<<"Given number is not a fibonacci number";
}