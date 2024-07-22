// Write a recursive function to print binary of a given decimal number.
#include<iostream>
using namespace std;
int function(int n){
    if(n<1){
        return 1;
    }
    else{
        int e=n%2;
        n=n/2;
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