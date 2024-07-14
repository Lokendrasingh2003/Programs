// WAP to input a three digit number and display the sum of three digits

#include<iostream>
using namespace std;

int main(){
    int a,sum=0,temp;
    cout<<"Enter a three digit number:";
    cin>>a;
    for(int i=0;i<=2;i++){
        temp=a%10;
        sum=sum+temp;
        a=a/10;
    }
    cout<<"sum of three digit number is:"<<sum;

}