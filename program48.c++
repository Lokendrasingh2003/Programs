

// patern
#include<iostream>
using namespace std;
int main(){
    int n,m=3,o=3;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=m;j++){
            cout<<" ";
        }
        m--;
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int c=i-1;c>0;c--){
            cout<<c;
        }
        for(int l=1;l<=o;l++){
            cout<<" ";
        }
        o--;
        cout<<endl;
    }
}