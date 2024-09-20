//shallow copy
#include<iostream>
using namespace std;

class Shallow
{
private:
   string name;
   int *roll_no;
public:
   Shallow(string n,int r){
    name=n;
    roll_no=new int ;
    roll_no=&r;
   }
   Shallow(const Shallow &obj1){
    name=obj1.name;
    roll_no=obj1.roll_no;
   }

   void change_roll(int ro){
    *roll_no=ro;
   }
   void display(){
    cout<<"Student name "<<name<<endl;
    cout<<"Student Roll number "<<*roll_no<<endl;
   }
};



int main(){
Shallow obj("Pawan",121);
Shallow obj2(obj);
obj.display();
obj2.display();
obj.change_roll(122);
obj.display();
obj2.display();
}