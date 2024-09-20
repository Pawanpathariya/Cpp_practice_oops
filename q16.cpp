//friend class 
#include<iostream>
using namespace std;

class Employee{
    string name;
    int salary;
 public:
Employee(string n,int s){
    name=n;
    salary=s;
}
void display(){
    cout<<"Name "<<name<<endl;
    cout<<"Salary "<<salary<<endl;
}
friend class Company;
};

class Company{
public:
void dis(Employee &obj){
    cout<<"name "<<obj.name<<endl;
    cout<<"salary "<<obj.salary;
}
};
int main(){
    Employee obj("pawan",250000);
    Company obj2;
    obj2.dis(obj);

}