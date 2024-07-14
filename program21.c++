// WAP to check whether a given year is a leap year or not.

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"please input a year to check given year is leap year or not:";
    cin>>year;
    if( year%400==0){
        cout<<"Given year is Leap Year";
    }
    else if(year%100==0){
        cout<<"Given year is not a leap year";
    }
    else if(year%4==0){
        cout<<"Given year is a leap year";
    }
    else{
        cout<<"Given year is not a leap year";
    }
}