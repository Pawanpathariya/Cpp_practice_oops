//function overloading 
#include <iostream>
using namespace std;

void sum(int n1,int n2){
    cout<<n1+n2<<endl;
}
void sum(int n1,int n2,int n3){
    cout<<n1+n2+n3<<endl;
}
void sum(int n1,int n2,int n3,int n4){
    cout<<n1+n2+n3+n4<<endl;
}

int main(){
 sum(2,3,4);
 sum(2,3);
 sum(2,3,5,6);
}