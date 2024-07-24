// Write a program to find second largest elements stored in an array of size 10. Take array values from the user.
#include<iostream>
using namespace std;
int main(){
    int array[10],num,max,temp;
    for(int i=0;i<10;i++){
        cout<<"Enter the number:";
        cin>>num;
        array[i]=num;
    }
    max=array[0];
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }   
    cout<<"The Second largest element of an array is:"<<array[1];
}