
// pattern
#include<iostream>
using namespace std;
int main(){
    int n,m=5;
    for(char i='A';m>=1;i++){
        n=1;
        for(int k=5;k>m;k--){
            cout<<" ";
        }
         for(char j=i;j<='E';j++){
            cout<<j;  
        }
         m--;
        cout<<endl;
    }
}