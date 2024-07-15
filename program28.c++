// WAP to find check wherter a number is prime number or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check whether it is prime number or not:";
    cin>>n;
    for(int i=2;i<n;i++){
       
         if(n%i==0){
            cout<<"Not a prime number";
        }
        else{
            cout<<"Prime number";
        }
    }

     if(n==1 || n==2){
        cout<<"It is a prime number";
       
    }
}