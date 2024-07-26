// Write a program to find the spaces in the given string.
#include<iostream>
using namespace std;

int main() {
    char a[100];
    int occurance=0,length=0;

    cout <<"Enter the string:";
    cin.getline(a, 100);

    while (a[length] != '\0') {
        if (a[length] == ' ') {
            occurance++;
        }
        length++;
    }

    cout<<"Total number of spaces present in the given string is: " <<occurance;
}
