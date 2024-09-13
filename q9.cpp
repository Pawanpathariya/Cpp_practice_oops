//Parameterized constructor 
#include<iostream>
using namespace std;

class Student {
private:
string name,address;
int roll;
public:
Student(string nm,string add,int r){
    name=nm;
    address=add;
    roll=r;
}

void display(){
    cout<<"Student name "<<name<<endl;
    cout<<"Student address "<<address<<endl;
    cout<<"Student roll "<<roll<<endl;
}
};

int main(){
Student obj("pawan","bhopal",121);
obj.display();
}