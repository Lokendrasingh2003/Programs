
// Write a function to swap two characters of given string between specified indices.
#include<iostream>
using namespace std;

int function(char a[100],int length,int posi1,int posi2){
    char temp;
    temp=a[posi1];
    a[posi1]=a[posi2];
    a[posi2]=temp;
    cout<<a;
}


int main(){
    char a[100],b[100];
    int length_a=0,result,posi1,posi2;
    cout<<"Enter a string:";
    cin.getline(a,100);
    cout<<"Enter the position which do you want to swap:";
    cin>>posi1;
    cout<<"Enter the position which do you want to swap with:";
    cin>>posi2;
    while(a[length_a]!='\0'){
        length_a++;
    }
    function(a,length_a,posi1,posi2);
    
   
    
}

