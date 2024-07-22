// Write a recursive function to print octal of a given decimal number.
#include<iostream>
using namespace std;
int function(int n){
    if(n<1){
        return 1;
    }
    else{
        int e=n%8;
        n=n/8;
        function(n);
       
        cout<<e;
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    function(n);
}