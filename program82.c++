// Write a function to sort elements stored in an array of any size.
#include<iostream>
using namespace std;
int function(int size){
    int array[size],num,temp;
    for(int i=0;i<size;i++){
        cout<<"Enter the number:";
        cin>>num;
        array[i]=num;
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<=size;j++){
         if(array[i]>array[j]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        }
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }   
}
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    function(size);
}