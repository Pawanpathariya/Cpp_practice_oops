/*a.	Rotate an array by one place to left
		1 2 3 4 5 
		2 3 4 5 1
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    int s=arr[0];
 for(int i=0;i<n;i++){
    if(i==n){
        arr[i]=s;
    }
 arr[i]=arr[i+1];
 }

 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}