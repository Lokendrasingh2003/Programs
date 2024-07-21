// pattern

#include<iostream>
using namespace std;
int main(){
    int n=1,p=3,q=3,r=4;
    for(int i=1;i<=r;i++){
        cout<<i;
    }
    for(int i=r-1;i>=1;i--){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=3;i++){
       for(int j=1;j<=p;j++){
        cout<<j;
       }
       p--;
        for(int j=n;j>0;j--){
        cout<<" ";
       }
       n=n+2;
       for(int j=q;j>0;j--){
        cout<<j;
       }
      q--;
      
       cout<<endl;
    }
}