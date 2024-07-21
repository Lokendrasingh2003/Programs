
#include<iostream>
using namespace std;

int main(){
    float math,english,science,total,percentage;
    char grade;
    cout<<"Enter your marks in math"<<endl;
    cin>>math;
    cout<<"Enter your marks in english"<<endl;
    cin>>english;
    cout<<"Enter your marks in science"<<endl;
    cin>>science;
    total=math+english+science;
    percentage=(total/300)*100;
    if(percentage>90){
        grade='A';
    }
    else if(percentage>79){
        grade='B';
    }
    else if(percentage>30){
        grade='C';
    }
    
    switch (grade)
    {
    case 'A':
        cout<<"You Got Grade A";
        break;
    case 'B':
        cout<<"You Got Grade B";
        break;
    case 'C':
        cout<<"You Got Grade C";
        break;
    
    default:
        cout<<"you are poor student";
        break;
    }

}