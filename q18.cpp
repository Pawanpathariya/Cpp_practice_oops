//Abstract class 
#include<iostream>
using namespace std;

class RBI{
    public:
    virtual void repo_rate()=0;
    virtual void int_rate()=0;

    void display(){
        cout<<"RBI regulate all bank \n";
    }
};

class SBI :public RBI{
public:
void repo_rate(){
    cout<<"9.8% "<<endl;
}
void int_rate(){
    cout<<"11.8% "<<endl;
}

};
int main(){
    RBI *ptr=new SBI;
    ptr->display();
    ptr->repo_rate();
    ptr->int_rate();
}