//shallow copy constructor
#include<iostream>
using namespace std;
class Copy{
public:
string name,education;


Copy(string nm,string ed){
    name=nm;
    education=ed;
}
Copy(Copy &obj){
    name=obj.name;
    education=obj.education;
}

void display(){
    cout<<"Name "<<name<<endl;
    cout<<"Education "<<education<<endl;
}
};
int main(){
Copy obj1("pawan","Btech");
obj1.name="naman";
Copy obj2(obj1);
obj1.display();
obj2.display();
}