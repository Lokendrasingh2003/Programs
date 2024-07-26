// Write a program to find the occurance of the given character in the string.
#include<iostream>
using namespace std;
int main(){
    char a[100],b;
    int occurance=0,length=0;
    cout<<"Enter the string:";
    cin.getline(a,100);
    cout<<"Enter the character which do you want to find the ocurrance in the given string:";
    cin>>b;

    while(a[length]!='\0'){
        if(a[length]==b){
            occurance++;
        }
        length++;
    }
    cout<<"The occurance of the "<<b<< " in the given string is:"<<occurance;

}