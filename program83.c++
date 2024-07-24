// Write a function to 
#include<iostream>
using namespace std;
int function(int size,int n,int d){
    int array1[size],array2[size],num,temp;
    for(int i=0;i<size;i++){
        cout<<"Enter the number:";
        cin>>num;
        array1[i]=num;
    }
    if(d=='right'){
    for(int i=n-1;i<size;i++){
        array2[i]=array1[i];
    }
     for(int i=0;i<n;i++){
        array2[i]=array1[i];
    }
    }
    else if(d=='left'){
    for(int i=n-1;i<size-n;i++){
        array2[i]=array1[i];
    }
    for(int i=0;i<n;i++){
        array2[i]=array1[i];
    }
    }
    for(int i=0;i<size;i++){
        cout<<array1[i]<<" ";
    }   
}
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    function(size);
}