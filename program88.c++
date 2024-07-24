//Write a function to merge two arrays of the same size sorted in descending order.

#include<iostream>
using namespace std;
int function(int size){
   int array1[size],array2[size],array3[size*2],num,temp;
   for(int i=0;i<size;i++){
    cout<<"Enter the value of first array:";
    cin>>num;
    array1[i]=num;
   }

   for(int i=0;i<size;i++){
    cout<<"Enter the value of second array:";
    cin>>num;
    array2[i]=num;
   }
   for(int i=0;i<size;i++){
     array3[i]=array1[i];
   }
   int a=0;
   for(int i=size;i<size*2;i++){
    array3[i]=array2[a];
    a++;
   }
   for(int i=0;i<size*2;i++){
    for(int j=i+1;j<size*2;j++){
        if(array3[i]>array3[j]){
            temp=array3[i];
            array3[i]=array3[j];
            array3[j]=temp;
        }
    }
   }

   for(int i=0;i<size*2;i++){
    cout<<array3[i]<<",";
  
}
}
int main(){
    int size,result;
    cout<<"Enter the size of the array: ";
    cin>>size;
    function(size);
    
}