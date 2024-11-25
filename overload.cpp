#include<iostream>
using namespace std;
class overload{
public:

void sum(int a,int b){
if(a>b){
    cout<<" the max is "<<a<<endl;
}
else{
      cout<<" the max is "<<b<<endl;
}
}

void sum(float a,float b){
if(a>b){
    cout<<" the max is "<<a<<endl;
}
else{
      cout<<" the max is "<<b<<endl;
}
}

void sum(char a,char b){
if(a>b){
    cout<<" the max is "<<a<<endl;
}
else{
      cout<<" the max is "<<b<<endl;
}
}

};

int main(){
int n1=10,n2=20;
float f1=10.5,f2=11.8;
char c1='A',c2='Z';
overload obj;
obj.sum(n1,n2);
obj.sum(f1,f2);
obj.sum(c1,c2);

}