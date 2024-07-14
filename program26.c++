// WAP to find facotrial of any number.

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n,result;
    cout<<"Enter a number for factorial:";
    cin>>n;
    cout<<factorial(n);
}