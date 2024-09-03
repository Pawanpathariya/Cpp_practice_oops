/*.Define a class to represent a bank account. Include the following members:

Data members:
1) Name of the depositor
2) Account number
3) Type of account
4) Balance amount in the account.
5) password 

Member functions:
1) To assign initial values (constructor)
2) To deposit an amount (match password if want to perform operation)
3) To withdraw an amount after checking the balance (match password if want to perform operation)
4) To display name and balance.
*/
#include<iostream>
using namespace std;

class Bank{
private:
string name,type_of_account;
int account_number,password,balance;

public:
Bank(string nm,int ac,string ta,int bal,int pass){
    name=nm;
    account_number=ac;
    type_of_account=ta;
    balance=bal;
    password=pass;
}

void deposit(int amount,int pass){
    if(password==pass){
        balance+=amount;
    }
    else{
        cout<<"wrong password"<<endl;
    }
}
void withdraw(int amount,int pass){
    if(password==pass){
        balance -=amount;
    }
}

void display(){
    cout<<"Name "<<name<<endl;
    cout<<"balance "<<balance<<endl;
}
};
int main(){
    Bank obj1("Pawan",202532545,"saving",2500,2004);
    obj1.display();
    obj1.deposit(2000,2004);
    obj1.display();
    obj1.withdraw(500,2004);
    obj1.display();
    obj1.withdraw(50000,2007);
    obj1.display();

}