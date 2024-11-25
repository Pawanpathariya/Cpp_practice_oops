#include<iostream>
using namespace std;

bool Palin(int a){
int last,sum=0,temp=a;
while(a>0){
last=a%10;
sum=sum*10+last;
a=a/10;
}

if(temp==sum){
    return true;
}
else{
    return false;
}
}

int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;
 bool fl=Palin(a);
 if(fl){
    cout<<"Palindrome ";
 }

 else{
      cout<<"Not Palindrome ";
 }
}