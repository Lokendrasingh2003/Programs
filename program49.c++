
// pattern
#include<iostream>
using namespace std;
int main(){
    int p=3,q=3,r=4,s;
    for(int i=8;i>=0;i-=2){
        for(int j=3;j>p;j--){
           cout<<" ";
        }
        p--;
        s=0;
        for(char k='A';s<=i;k++){
            cout<<k;
            s++;
        }
        for(int l=3;l>q;l--){
            cout<<" ";

        }
        q--;
        cout<<endl;
    }
}