// Write a recursive function to print N odd natural numbers.
#include<iostream>
using namespace std;
int function(int n){
    if(n==0){
        return 1;
    }
    else{
        
        function(n-1);
        if(n%2==1)
        cout<<n<<",";
        
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    function(n);
}