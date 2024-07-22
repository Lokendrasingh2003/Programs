// Write a recursive function to print reverse of a given number.
#include<iostream>
using namespace std;
int function(int n){
    if(n<1){
        return 1;
    }
    else{
        int e=n%10;
        n=n/10;
        cout<<e;
        function(n);
        
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    function(n);
}