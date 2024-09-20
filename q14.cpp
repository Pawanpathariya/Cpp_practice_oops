#include<iostream>
using namespace std;

class Deep{
private:
string educa;
int *roll;

public:
Deep(string ed,int ro){
educa=ed;
roll=new int;
*roll=ro;
}

Deep(Deep &obj){
    educa=obj.educa;
    roll=new int;
    *roll=*obj.roll;
}
  void change_roll(int ro){
    *roll=ro;
   }
   void display(){
    cout<<"Student name "<<educa<<endl;
    cout<<"Student Roll number "<<*roll<<endl;
   }

};
int main(){
Deep obj("Pawan",121);
Deep obj2(obj);
obj.display();
obj2.display();
obj.change_roll(122);
obj.display();
obj2.display();
}