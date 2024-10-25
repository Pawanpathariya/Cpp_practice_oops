#include<iostream>
using namespace std;
int main(){
 char a;
 cout<<"Enter any character ";
 cin>>a;

 if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
  cout<<"Vowel ";
 }
 else{
    cout<<"Not a Vowel ";
 }
}