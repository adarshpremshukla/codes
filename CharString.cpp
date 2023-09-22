#include<iostream>
using namespace std;

// int main(){
    
//     char name[20];
//     cout<<"Enter your name "<<endl;
//     cin>>name;

//     name[2]='\0';

//     cout<<"Your name is ";
//     cout<<name;


// }


// FIND LENGTH OF A STRING

// int getLength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }

//     return count;
// }

// int main(){
    
//     char name[20];
//     cout<<"Enter your name "<<endl;
//     cin>>name;
//     cout<<"Length is "<<getLength(name)<<endl;
// }

int main(){
char ch[20];
cout<<"Enter name ";
cin.getline(ch,20);
cout<<"My name is "<<ch<<endl;

int len=strlen(ch);
cout<<"Length of my string is "<<len<<endl;















}