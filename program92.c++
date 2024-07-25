// Write a program to transpose of the given matrices.
#include<iostream>
using namespace std;
int function(){
    int array1[2][3],array2[3][2],num,temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the value of first array of "<<i+1<<" row "<<j+1<<" column:";
            cin>>num;
            array1[i][j]=num;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){  
           
            array2[i][j]=array1[j][i];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<array2[i][j]<<" ";
            }
            cout<<endl;
            }
}
int main(){
    function();
}

