//Write a function to count the duplicate values in the array.

#include<iostream>
using namespace std;
int function(int size){
   int array[size],num,temp,count=0;
   for(int i=0;i<size;i++){
    cout<<"Enter the value:";
    cin>>num;
    array[i]=num;
   }

    for(int i=0;i<size;i++){
        temp=array[i];
        for(int j=i+1;j<size;j++){
            if(temp==array[j]){
                count++;
        }
    }
}
   return count;
}
int main(){
    int size,result;
    cout<<"Enter the size of the array: ";
    cin>>size;
    result=function(size);
    cout<<result;
}