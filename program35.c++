// WAP to check whether a number is armstrong number is not.

#include<iostream>
using namespace std;
int main(){
    int number,sum=0,temp,temp2;
    cout<<"Enter the number:";
    cin>>number;
    temp2=number;
    for(int i=0;number>0;i++){
        temp=number%10;
        temp=temp*temp*temp;
        sum=sum+temp;
        number=number/10;
    }
    if(sum==temp2){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Number is not a armstrong";
    }

}