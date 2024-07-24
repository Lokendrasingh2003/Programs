//Write a function to find the first occurrence of adjacent duplicate values in the array.Function has to return the value of the element.

#include<iostream>
using namespace std;
int function(int size,int index1,int index2){
   int array[size],num,temp;
   for(int i=0;i<size;i++){
    cout<<"Enter the value:";
    cin>>num;
    array[i]=num;
   }
    temp=array[index1];
    array[index1]=array[index2];
    array[index2]=temp;

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int size,result,indextobereplace,indexwithreplace;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the index which do you replace:";
    cin>>indextobereplace;
    cout<<"Enter the index with which you replace: ";
    cin>>indexwithreplace;
    result=function(size,indextobereplace,indexwithreplace);
    cout<<result;
}