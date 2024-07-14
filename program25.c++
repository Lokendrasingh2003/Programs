// WAP to to calculate sum of first  N natural numbers.

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of given natural numbers:"<<sum;
}