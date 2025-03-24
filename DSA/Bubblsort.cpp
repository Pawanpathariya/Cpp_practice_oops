#include<iostream>
using namespace std;
void bubble(int arr[],int s){ 
    for(int i=0;i<s;i++){
        bool f=true;
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                f=false;
            }
        }
        if(f){
            break;
        }
}
}
int main(){
    int arr[]={3,2,1,4,5};
    int s=sizeof(arr)/sizeof(arr[0]);
 
    cout<<"Before sorting\n";
    for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
    }
bubble(arr,s);
    cout<<"\nAfter sorting\n";
    for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
    }
}