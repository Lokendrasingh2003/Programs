// Write a recursive function to print sum of N natural number.
#include<iostream>
using namespace std;
int function(int n){
    if(n<1){
        return 1;
    }
    else{

       return n+function(n-1);
        
    }
}
int main(){
    int n,result;
    cout<<"Enter the number:";
    cin>>n;
    result=function(n);
    cout<<result;
}