#include<iostream>
using namespace std;
int GCD(int a,int b){
    int min;
if(a>b){
    min=b;
}
else{
    min=a;
}

for(int i=min;i>=1;i--){
    if(a%i==0 && b%i==0){
        return i;
    }
}

}

int main(){
int a,b;
cout<<"enter two values ";
cin>>a>>b;
int ans=GCD(a,b);
cout<<ans;
}