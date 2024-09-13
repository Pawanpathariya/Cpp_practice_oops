//default constructor 
#include<iostream>
using namespace std;

class Student {
private:
string name,address;
int roll;
public:
Student(){
    name="";
    address="";
    roll=0;
}

void display(){
    cout<<"Student name "<<name<<endl;
    cout<<"Student address "<<address<<endl;
    cout<<"Student roll "<<roll<<endl;
}
};

int main(){
Student obj;
obj.display();
}