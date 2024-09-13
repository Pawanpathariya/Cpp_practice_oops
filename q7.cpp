//function overridding
#include <iostream>
using namespace std;

class Base{
public:
void display(){
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
Derived obj;
obj.display();
Base obj1;
obj1.display();
}