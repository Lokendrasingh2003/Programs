// Write a function to print all prime factors of a given number. for example, if the number is 36 then your result should be 2,2,3,3

#include<iostream>
using namespace std;
int prime(int n){
    int c=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        cout<<n<<","<<n<<",";
    }
}
int function(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
           prime(i); 
           
        }
    }
}
int main(){
    int n=36,result;
    function(n);
    

}