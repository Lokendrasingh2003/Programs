// write a program to make the last digit of a number stored in a variable as zero

#include<iostream>
using namespace std;
int main(){
    int digit,temp;
    cout<<"Enter the digit:";
    cin>>digit;
    temp=digit/10;
    digit=temp*10;
    cout<<"Output is:"<<digit;

}