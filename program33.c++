// WAP to check whether two given number are co-prime numbers or not

#include<iostream>
using namespace std;
int main(){
    int a,b,arr1[100],arr2[100],c=0,d=0,e=0;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            arr1[c]=i;
            c=c+1;

        }
    }
     for(int i=1;i<=b;i++){
        if(b%i==0){
            arr2[d]=i;
            d=d+1;

        }
    }
    for(int i=1;i<=c;i++){
        if(arr1[i]==arr2[i]){
            cout<<"these numbers are not co-prime numbers";
            e=e+1;
        }

    }
    if(e==0){
        cout<<"These numbers are co-prime numbers";
    }

}