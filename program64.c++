// Write a recursive function to print N odd natural numbers in reverse order.
#include<iostream>
using namespace std;
int function(int n){
    if(n==0){
        return 1;
    }
    else{
        if(n%2==1){
        cout<<n<<",";
        }
        function(n-1);
        
        
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    function(n);
}