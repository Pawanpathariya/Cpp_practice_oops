#include<iostream>
using namespace std;
void selection(int arr[],int s){

    for(int i=0;i<s;i++){
        int key=i;
for(int j=key+1;j<s;j++){
    if(arr[key]>arr[j]){
        key=j;
    }
}

if(key!=i){
int t=arr[i];
arr[i]=arr[key];
arr[key]=t;
}
    }
}
int main(){
    int arr[]={3,1,2,5,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

selection(arr,s);

    cout<<"\nAfter sorting\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

}