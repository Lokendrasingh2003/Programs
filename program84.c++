//Write a function to find the first occurrence of adjacent duplicate values in the array.Function has to return the value of the element.

#include<iostream>
using namespace std;
int function(int size){
   int array[size],num,temp;
   for(int i=0;i<size;i++){
    cout<<"Enter the value:";
    cin>>num;
    array[i]=num;
   }
   for(int i=0;i<size;i++){
    temp=array[i];
    for(int j=i+1;j<size;j++){
        if(array[j]==temp){
            return temp;
        }
    }
   }
}
int main(){
    int size,result;
    cout<<"Enter the size of the array: ";
    cin>>size;
    result=function(size);
    cout<<result;
}