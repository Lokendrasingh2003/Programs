
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n,r;
    cout<<"Enter a number:";
    cin>>n;
    r=factorial(n);
    cout<<"The factorial of a given number:"<<r;

}