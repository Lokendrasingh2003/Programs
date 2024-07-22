
// Write a recursive function to find factorial of a given number.
#include<iostream>
using namespace std;
int function(int n){
    if(n==0){
        return 1;
    }
    else{
       return n*function(n-1);
        
    }
}
int main(){
    int n,result;
    cout<<"Enter the number:";
    cin>>n;
    result=function(n);
    cout<<result;
}