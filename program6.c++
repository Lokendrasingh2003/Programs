// WAP to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.

#include<iostream>
using namespace std;

int main(){
    float cost_price, selling_price, profit, loss,temp,temp2,temp3;
    cout<<"Enter the cost price of banana per dozen: ";
    cin>>cost_price;
    cout<<"Enter the selling price of banana per dozen: ";
    cin>>selling_price;
    
    temp=25/12.0;
    temp2=temp*selling_price;
    temp3=temp*cost_price;
    if(temp3<temp2)
    {
        profit=temp2-temp3;
        cout<<"Profit earned is: "<<profit;
    }
    else if(temp2<temp3)
    {
         loss=temp3-temp2;
         cout<<"Loss earned is: "<<loss;
    }
    else{
        cout<<"No profit or loss";
    }
}