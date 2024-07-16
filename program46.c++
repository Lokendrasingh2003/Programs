

#include<iostream>
using namespace std;
int main(){
    int p=3,q=3;
    for(int i=1;i<=8;i+=2){
        for(int j=1;j<=p;j++){
            cout<<" ";
        }
        p--;
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int l=1;l<=q;l++){
            cout<<" ";
        }
        q--;
        cout<<endl;
    }
}