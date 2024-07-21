// pattern

#include<iostream>
using namespace std;
int main(){
    int n=0;
    for(int i=4;i>=1;i--){
       for(int j=1;j<=i;j++){
        cout<<"*";
       }
       for(int j=n;j>0;j--){
        cout<<" ";
       }
       n=n+2;
       for(int j=1;j<=i;j++){
        cout<<"*";
       }
       cout<<endl;
    }
}