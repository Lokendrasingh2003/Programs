// Write a function to print first N terms of Fibonacci series.
#include<iostream>
using namespace std;
int function(int n){
    int a=-1,b=1,sum=0;
    for(int i=1;i<=n;i++){
       sum=a+b;
       cout<<sum<<",";
       a=b;
       b=sum;
    }
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   function(n);

}





