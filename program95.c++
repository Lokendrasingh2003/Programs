// Write a program to find the total numbers of vowels in the given string.
#include<iostream>
using namespace std;
int main(){
    char a[100],b;
    int occurance=0,length=0;
    cout<<"Enter the string:";
    cin.getline(a,100);
   

    while(a[length]!='\0'){
        if(a[length]=='a'||a[length]=='A'||a[length]=='e'||a[length]=='E'||a[length]=='i'||a[length]=='I'||a[length]=='o'||a[length]=='O'||a[length]=='u'||a[length]=='U'){
            occurance++;
        }
        length++;
    }
    cout<<"Total numbers of the vowel present in the given string is:"<<occurance;

}