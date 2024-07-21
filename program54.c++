
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"print good";
        break;
    case 2:
        cout<<"better";
        break;
    case 3:
        cout<<"best";
        break;
    
    default:
        cout<<"invalid";
        break;
    }
}