
// pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=5;i>=1;i--){
        n=1;
        for(int k=5;k>i;k--){
            cout<<" ";
        }
         for(char j='A';n<=i;j++){
            cout<<j;
            n++;
        }
        cout<<endl;
    }
}