// Write a program to calculate the product of two matrices each of order 3x3.
#include<iostream>
using namespace std;
int function(){
    int array1[3][3],array2[3][3],array3[3][3],num,temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the value of first array of "<<i+1<<" row "<<j+1<<" column:";
            cin>>num;
            array1[i][j]=num;
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the value of second array of "<<i+1<<" row "<<j+1<<" column:";
            cin>>num;
            array2[i][j]=num;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){  
            temp=0;
            for(int k=0;k<3;k++){
            temp+=array1[j][j]*array2[k][j];
            }
            array3[i][j]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<array3[i][j]<<" ";
            }
            cout<<endl;
            }
}
int main(){
    function();
}