//Write a function to print the unique values in the array.

#include<iostream>
using namespace std;
int function(int size){
   int array[size],num,temp,count;
   for(int i=0;i<size;i++){
    cout<<"Enter the value:";
    cin>>num;
    array[i]=num;
   }

    for(int i=0;i<size;i++){
        temp=array[i];
        count=0;
        for(int j=0;j<size;j++){
            if(i==j){
                j++;
            }
            if(temp==array[j]){
                count++;
        }
       
    }
     if(count==0){
            cout<<temp<<" is not repeated"<<endl;
        }
}
  
}
int main(){
    int size,result;
    cout<<"Enter the size of the array: ";
    cin>>size;
    function(size);
    
}