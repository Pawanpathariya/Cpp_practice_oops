/*1.Find minimum/maximum element */
#include<iostream>
using namespace std;
int main(){
    int arr[]={44,4,1,5,6,79,45};
    int len=sizeof(arr)/sizeof(arr[0]),max,min;
     if(arr[0]>arr[1]){
      min=arr[1];
      max=arr[0];
     }
     else{
      min=arr[0];
      max=arr[1];
     }

     for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
     }
     cout<<"Max is "<<max<<"\n";
     cout<<"Min is "<<min<<"\n";
}