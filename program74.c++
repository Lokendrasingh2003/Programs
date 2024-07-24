// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<iostream>
using namespace std;
int main(){
    int array[10],num,sum=0,avg=0;
    for(int i=0;i<10;i++){
        cout<<"Enter the number:";
        cin>>num;
        array[i]=num;
    }
    for(int i=0;i<10;i++){
        sum=sum+array[i];
    }
    avg=sum/10;
    cout<<"The average of array element is:"<<avg;
}