//Write a program to check whether roots of a given quadratic equation are real & distinct, real &equal or imaginary roots

#include<iostream>
using namespace std;
int main(){
    int a,b,c,result;
    cout<<"Enter the cofficient of a,b,c"<<endl;
    cin>>a>>b>>c;
    result=(b*b)-(4*a*c);
    if(result>0){
        cout<<"Real and distinct Roots";
    }
    else if(result==0){
        cout<<"Real and equal Roots";
    }
    else{
        cout<<"Imaginary Roots";
    }


}