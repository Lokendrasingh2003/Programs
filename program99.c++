
// Write a program to count the alphabets and digits in the given string.
#include<iostream>
using namespace std;

int main() {
    char a[100];
    int length=0,c=0,d=0;

    cout <<"Enter the string:";
    cin.getline(a, 100);

    while(a[length]!='\0'){
            if(a[length]>='a' && a[length]<='z'){
                c++;
            length++;
            }
            else if(a[length]>='0' && a[length]<='9'){
              d++;
              length++;
            }
            else {
                length++;
            }
    }
      cout<<"In the given string there are total numbers of alphabet are:"<<c<<endl;
      cout<<"In the given string there are total numbers of digits are:"<<d<<endl;
    }

