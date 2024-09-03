/*Write a C++ program to define a class employee having members Emp-id, Emp-name, basic salary 
and functions accept() , display() and calculate_salary().
Calculate DA=10 % of basic salary, HRA=1500. 
net_salary = basic_salary + da + hra
Display the output.*/

#include<iostream>
using namespace std;

class Employee{
private:
int emp_id;
double basic_sal,hra,da,net_sal;
string emp_name;

public:
 void accept(){
    cout<<"Enter name ";
    cin>>emp_name;
    cout<<"Enter id ";
    cin>>emp_id;
    cout<<"basic salary ";
    cin>>basic_sal;
    da=basic_sal/100*10;
    hra=1500;
}

 void calculate_sal(){
    net_sal=basic_sal+da+hra;
 }
 void display(){
    cout<<"Name "<<emp_name<<endl;
    cout<<"ID "<<emp_id<<endl;
    cout<<"Basic salary "<<basic_sal<<endl;
    cout<<"hra "<<hra<<endl;
    cout<<"da "<<da<<endl;
    cout<<"salary "<<net_sal<<endl;

 }
};
int main(){
Employee e1;
e1.accept();
e1.calculate_sal();
e1.display();
}