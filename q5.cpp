//operator overloading 
#include<iostream>
using namespace std;

class Operators{
private:
   int marks;
public:
   Operators(int num){
    marks=num;
   }
  Operators operator +(Operators obj){
    Operators temp(0);
    temp.marks=marks+obj.marks;
    return temp;
  }
  void display(){
    cout<<marks;

  }
};

int main(){
Operators s1(23),s2(50),s3(38);
Operators result=s1+s2+s3;
result.display();
}