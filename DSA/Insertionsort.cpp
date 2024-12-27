#include<iostream>
using namespace std;
void insrt(int arr[],int s){
    for(int i=1;i<s;i++){
        int key=i;
        while(key>0 && arr[key]<arr[key-1]){
            int temp=arr[key];
            arr[key]=arr[key-1];
            arr[key-1]=temp;
            key--;
        }
}
}
int main(){
    int arr[]={3,1,5,6,2};
    int s=sizeof(arr)/sizeof(arr[0]);
cout<<"Before sorting \n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
insrt(arr,s);
cout<<"\nAfter sorting \n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}