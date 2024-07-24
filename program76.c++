// Write a program to find the gratest number stored in an array of size 10. Take array values from the user.
#include<iostream>
using namespace std;
int main(){
    int array[10],num,max;
    for(int i=0;i<10;i++){
        cout<<"Enter the number:";
        cin>>num;
        array[i]=num;
    }
    max=array[0];
    for(int i=0;i<10;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    
    cout<<"The sum even element of array is:"<<max;
    
}