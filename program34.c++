// WAP to find prime numbers n times.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=3;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                cout<<"this is not a prime number:"<<i<<endl;
               break; 
            }
            else if(j==i-1){
                cout<<"this is a prime number:"<<i<<endl;
            }
        }  
    }
}