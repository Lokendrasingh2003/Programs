
// Write a recursive function to find fibanocai of a given number.
#include<iostream>
using namespace std;
int function(int n,int a,int b,int sum){
    if(n==0){
        return 1;
    }
    else{
        sum=a+b;
        cout<<sum<<",";
        a=b;
        b=sum;
        function(n-1,a,b,sum);
    }
}
int main(){
    int n,a=-1,b=1,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    function(n,a,b,sum);
    
}