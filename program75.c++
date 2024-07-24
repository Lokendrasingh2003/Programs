// Write a program to calculate the sum of all even number and odd number stored in an array of size 10. Take array values from the user.
#include<iostream>
using namespace std;
int main(){
    int array[10],num,sum_even=0,sum_odd=0;
    for(int i=1;i<=10;i++){
        cout<<"Enter the number:";
        cin>>num;
        array[i]=num;
    }
    for(int i=1;i<=10;i++){
        if(array[i]%2==0){
        sum_even=sum_even+array[i];
        }
        else{
            sum_odd=sum_odd+array[i];
        }
    }
    
    cout<<"The sum even element of array is:"<<sum_even<<endl;
    cout<<"The sum even element of array is:"<<sum_odd;
}