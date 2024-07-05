#include<iostream>
using namespace std;
void insertion(int arr[],int s){
for(int i=0;i<s;i++){
int key=i;
while(key>0 && arr[key]<arr[key-1]){
    int t=arr[key];
    arr[key]=arr[key-1];
    arr[key-1]=t;
    key--;
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
  
insertion(arr,s);

    cout<<"\nAfter sorting\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

}