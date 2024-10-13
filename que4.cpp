/* Reverse an array*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;

    while(start<=end)
    {
       int temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++,end--;
    }  
   
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" "; 
  }
}    