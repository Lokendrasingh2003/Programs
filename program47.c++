

// pattern

#include<iostream>
using namespace std;
int main(){
    int p=3,q=3;
    for(int i=8;i>=0;i-=2){
        for(int j=p;j>=1;j--){
            cout<<" ";
        }
        p++;
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        for(int l=q;l>=1;l--){
            cout<<" ";
        }
        q++;
        cout<<endl;
    }
}