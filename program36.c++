// WAP to find armstrong number between 1000.

#include<iostream>
using namespace std;

int main(){
    int n=1000, sum, temp, num;
    for(int i=100;i<n;i++){
        num=i;
        sum=0;
        while(num>0){
            temp=num % 10;
            temp=temp*temp*temp;
            sum=sum+temp;
            num=num/10;
        }
        if(sum == i){
            cout<<i<<endl;
        }
    }
   
}
