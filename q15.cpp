//Daimond Problem
#include<iostream>
using namespace std;

class Base{
public:
void display(){
    cout<<"Base";
}
};

class Parent1 : public virtual Base{

};
class Parent2 : public virtual Base{

};
class Child:public Parent1,public Parent2{

};
int main(){
    Child obj;
    obj.display();
}