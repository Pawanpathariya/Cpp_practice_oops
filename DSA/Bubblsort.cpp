#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
for(int i=0;i<n;i++){
      int count=0;
    for(int j=0;j<n-i-1;j++){ 
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            count++;
        }
    }
    if(count==0){
        break;
    }
}
}

int main(){
    int r;
    cout<<"enter the size of array ";
    cin>>r;
    int arr[r];

    if(r>=0 && r<=20){
        for(int i=0;i<r;i++){
            cin>>arr[i];
        }
        bubblesort(arr,r);
        for(int i=0;i<r;i++){
            cout<<arr[i]<<" ";
        }
    }
}