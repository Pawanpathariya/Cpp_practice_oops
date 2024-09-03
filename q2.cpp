/*.Write a C++ program to find the area of circle using class circle which have following details:

a. Accept radius from the user
b. Calculate the area
c. Display the result*/

#include<iostream>
using namespace std;

class Circle{
private:
double radius,area;

public:
Circle(){
    cout<<"Enter radius ";
    cin>>radius;
}

void cal_area(){
 area=3.14*radius*radius;
}

void display(){
    
    cout<<"Area of circle is "<<area<<endl;
}
};

int main(){
Circle obj1;
obj1.cal_area();
obj1.display();
}