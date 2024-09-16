#include<iostream>
using namespace std;
class Copy{
private:
string name,educat;

public:
Copy(string nm,string edu){
    name=nm;
    educat=edu;
}
Copy (Copy &obj1){
    name=obj1.name;
    educat=obj1.educat;
}
void change_nm(string n){
    name=n;
}
void display(){
    cout<<"Name "<<name<<endl;
    cout<<"Education "<<educat<<endl;
}
};

int main(){
Copy obj1("Pawan","Btech"),obj2(obj1);
obj1.display();
obj2.display();
obj1.change_nm("ajay");
obj1.display();
obj2.display();
//if want to show deep copy or shallow copy we need to done that in heap but if we do any copy in stack it always shows deep copy

}