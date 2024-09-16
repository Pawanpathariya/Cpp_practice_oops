//function overridding
#include <iostream>
using namespace std;

class Base{
public:
virtual void display(){
    cout<<"Base Class \n";
}
};
class Derived:public Base{
public:
 void display(){
    cout<<"Derived class \n";
 }
};
int main(){
Base *baseptr=new Derived;
baseptr->display();
baseptr->Base::display();

}