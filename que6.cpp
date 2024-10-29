/*Rotate an array by k places 
1 2 3 4 5 6 
4 5 6 1 2 3
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    int k;
    cout<<"enter k value ";
    cin>>k;

for(int i=0;i<k;i++){
 int temp=arr[0];
for(int j=0;j<n;j++){
   int tp;
    if(j==0){
        arr[j]=arr[n-1];
    }
    else{ 
        tp=arr[j];
       arr[j]=temp;
       temp=arr[j+1];
       arr[j+1]=tp ;
    }
 
}

}



 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}