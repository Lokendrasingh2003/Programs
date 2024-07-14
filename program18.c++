// WAP to input a number from the user and also input a digit. Append a digit in the number and print the resulting number . (Example-number=234 and digit=9 then the resulting number is 2349.)

#include<iostream>
using namespace std;

int main(){
    int number,digit,temp;
    cout<<"Enter a number:";
    cin>>number;
    cout<<"Enter a digit:";
    cin>>digit;
    temp=((number/10)*10)+digit;
    cout<<"Output is:"<<temp;
}