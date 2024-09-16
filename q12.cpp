//initializer list 
#include <iostream>
using namespace std;
class Base{
protected:
    int data;
public:
Base(int d){
    data=d;
}
};
class Derived:public Base{
 string name;
 public:
 Derived(string nm,int d):Base(d),name(nm){}
 void display(){
    cout<<"Name "<<name<<endl;
    cout<<"Data "<<data<<endl;
 }
};
int main(){
Derived obj("pawan",121);
obj.display();
}