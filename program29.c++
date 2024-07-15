// WAP to reverse any number.

#include<iostream>
using namespace std;
int main(){
    int number,temp1,temp2=0;
    cout<<"Enter a number:";
    cin>>number;
    for(int i=0;number>0;i++){
        temp1=number%10;
        if(temp2<=0){
            temp2=temp1;
        }
        else{
        temp2=temp2*10;
        temp2=temp2+temp1;
        }
        number=number/10;
    }
    cout<<"Reverse number is:"<<temp2;
}