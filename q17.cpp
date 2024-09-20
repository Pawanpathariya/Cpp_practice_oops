#include<iostream>
using namespace std;
class Bank{
string name;
int balance;

public:
Bank(string n,int b){
    name=n;
    balance=b;
}
void display(){
    cout<<"name "<<name<<endl;
    cout<<"balance "<< balance<<endl;
}
friend void deposit(Bank &obj ,int am);
};
void deposit(Bank &obj ,int am){
obj.balance=obj.balance-am;
}
int main(){
    Bank obj("Pawan",45000);
    obj.display();
    deposit(obj,10000);
     obj.display();
}