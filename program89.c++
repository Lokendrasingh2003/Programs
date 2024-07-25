//Write a function to print the frequency of each element in the array.

#include<iostream>
using namespace std;
int function(int size){
   int array[size],array2[size],num,temp,count,c;
   for(int i=0;i<size;i++){
    cout<<"Enter the value:";
    cin>>num;
    array[i]=num;
   }

   for(int i=0;i<size;i++){
    temp=array[i];
    count=1;
    for(int j=i+1;j<size;j++){
        if(temp==array[j])
          count++;
        }

        cout<<"The frequency of "<<temp<<" is:"<<count<<endl;
        }
       

            }


   



int main(){
    int size,result;
    cout<<"Enter the size of the array: ";
    cin>>size;
    function(size);
    
}