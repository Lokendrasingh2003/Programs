
#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter the side of triangle:"<<endl;
    cin>>side1>>side2>>side3;
    if(side1==side2&&side2==side3){
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(side1==side2||side2==side3||side1==side3){
        cout<<"Isosceles Triangle"<<endl;
    }
    else{
        side1=side1*side1;
        side2=side2*side2;
        side3=side3*side3;
        if(side1+side2==side3||side1+side3==side2||side2+side3==side1){
            cout<<"Right Triangle"<<endl;
        }
}
}