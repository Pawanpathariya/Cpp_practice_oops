/*binary search */
#include<iostream>
using namespace std;
int main(){
    int arr[]={54,4,2,6,45,56,89};
   int len=sizeof(arr)/sizeof(arr[0]);
   int find,low=0,high=len-1,mid=mid = low + (high - low) / 2; ;

  for(int i=0;i<len;i++){
    for(int j=i;j<len;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  }

for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";


   cout<<"Enter a number to find ";
   cin>>find;

bool flag=true;
while (low<=high){
if(find>arr[mid]){
if(arr[mid]==find){
    cout<<" number find at index "<<mid;
    flag=false;
    break;
}
 low = mid + 1; 
mid=high-low+low;
}
else{
    if(arr[mid]==find){
    cout<<" number find at index "<<mid;
    flag=false;
    break;
}
high=mid-1;
mid=high-low;
}
}
 if(flag){
    cout<<"Number is not found in it  ";
 }
}