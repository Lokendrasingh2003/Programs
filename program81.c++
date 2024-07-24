
// Write a function to find the greatest number from the given array of any size.
#include<iostream>
using namespace std;
int function(int size){
    int array[size],num,max;
   
    for(int i=0;i<size;i++){
        cout<<"Enter the number:";
        cin>>num;
        array[i]=num;
    }
    max=array[0];
    for(int i=1;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }   
    return max;
}
int main(){
    int result,size;
    cout<<"Enter the size of the array:";
    cin>>size;
    result=function(size);
    cout<<"The maximum number is:"<<result;
}