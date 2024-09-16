#include <iostream>
using namespace std;

class Base{
    int data;
public:
Base(int d){
    data=d;
}
virtual void display(){
    cout<<data;
}
};

int main(){
Base *baseptr=new Base(34);
baseptr->display();

}