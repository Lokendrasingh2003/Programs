// Write a program to copy elements of one array into another array.
#include<iostream>
using namespace std;
int main(){
    int array1[10],num,array2[10];
    for(int i=0;i<10;i++){
        cout<<"Enter the number:";
        cin>>num;
        array1[i]=num;
    }
    for(int i=0;i<10;i++){
        array2[i]=array1[i];
    }   
    for(int i=0;i<10;i++){
        cout<<array2[i]<<",";
    }
}