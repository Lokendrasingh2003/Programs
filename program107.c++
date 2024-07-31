#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;


char* trim(char str[],int l){
    char temp[100];
    int i=0,j=0;
    while(str[i]==' '){
        i++;
    }
    for(j=0,i;i<l;i++,j++){
        temp[j]=str[i];
    }
    j=l-1;
    while(temp[j]==' '){
         temp[j]='\0';
         j--;
    }
    return temp;
}
int word_count(char str[],int l){
    int c=0;
    for(int i=0;i<l;i++){
        if(str[i]==' '){
            if(str[i+1]==' '){
                continue;
            }
            else{
                c++;
            }
        }
    }
    return c;
}
void function(char str[]){
   char temp[100];
   int c;
   int l=strlen(str);
   trim(str,l);
   l=strlen(str);
   int c=word_count(str,l);
   char s[c][50];
   for(int i=0;i<c;i++){
      for(int j=0;str[j] ;j++){
       
            s[i][j]=str[j];
      
        
      }
   }
   
}
int main(){
    char str[100];
    cout<<"Enter a string:";
    cin.getline(str,100);
    function(str);
}