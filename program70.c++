
// Write a recursive function to print sum of N natural number.
#include<iostream>
using namespace std;
int function(int n){
    if(n<1){
        return 0;
    }
    else{
       int e=n%10;
       n=n/10;
       return e+function(n);
        
    }
}
int main(){
    int n,result;
    cout<<"Enter the number:";
    cin>>n;
    result=function(n);
    cout<<result;
}