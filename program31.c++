// WAP to print first N terms  of fibonacci series.

#include<iostream>
using namespace std;
int main(){
    int n,a=-1,b=1,sum=0;
    cout<<"Enter any number:";
    cin>>n;
    for(int i=1;i<=n;i++){
      
       sum=a+b;
       a=b;
       b=sum;
       cout<<b;  
    }
}