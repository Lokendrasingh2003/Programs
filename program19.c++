// write a program to take a three digit number from the user and rotate its digit by one position towards the right.

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a three digit number: ";
    cin >> number;
    int last_digit = number % 10; 
    int remaining_part = number / 10; 
    int rotated_number = last_digit * 100 + remaining_part;
    cout << "The number after rotating its digits to the right is: " << rotated_number << endl;
    
    return 0;
}
