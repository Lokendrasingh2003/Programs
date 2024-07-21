// write a function to calculate the number of combinations one can make from n items to r selected at a time.
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
    int n,r,s,p,q,t;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter another number:";
    cin>>r;
    s=(factorial(n)/(factorial(r)*factorial(n-r)));
    cout<<"The number of combinations is:"<<s;



}