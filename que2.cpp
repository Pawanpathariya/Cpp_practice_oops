/*linear search*/
#include<iostream>
using namespace std;

int search(int arr[],int len,int x){
for(int i=0;i<len;i++){
    if(arr[i]==x){
        return i;
    }
}
return -1;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8};
int len=sizeof(arr)/sizeof(arr[0]);
int find;
cout<<"Enter a number for find ";
cin>>find;

int index=search(arr,len,find);

if(index==-1){
    cout<<"Number is not found in the array ";
}
else{
    cout<<"Number found at index "<<index;
}
}
