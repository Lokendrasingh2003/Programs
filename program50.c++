
// pattern
#include<iostream>
using namespace std;
int main(){
    int p=4,q=4,r,s;
    for(int i=1;i<=5;i++){
      for(int j=1;j<=p;j++){
        cout<<" ";
      }
      p--;
      r=1;
      for(int j=1;j<=i;j++){
        if(j%2==0){
            cout<<" ";
        }
        else{
            cout<<r;
            r++;
        }
      }
      s=r-1;
      for(int j=i-1;j>=1;j--){
          if(j%2==0){
            cout<<" ";
            s--;
        }
        else{
            cout<<s;
           
        }
      }
      for(int j=1;j<=q;j++){
        cout<<" ";
      }
      q--;
      cout<<endl;
    }

}