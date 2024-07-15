// WAP to find digits in a given number

#include<iostream>
using namespace std;
int main(){
    int number,temp,count=0;
    cout<<"Enter a number:";
    cin>>number;
    for(int i=0;number>0;i++){
        temp=number/10;
        number=temp;
        count++;
    }
    cout<<"The number of digits in the number is:"<<count;
}