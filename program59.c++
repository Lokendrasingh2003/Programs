// write a function to find the next prime number of a given number
#include<iostream>
using namespace std;
int prime(int n){
    
    for(int i=n;i>0;i++){
        int c=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                c++;
                break;
                
            }
        }
        if(c==0){
            return i;
        }
        
    }
}
int main(){
    int n,r;
    cout<<"Enter a number:";
    cin>>n;
    r=prime(n+1);
    cout<<r;
}