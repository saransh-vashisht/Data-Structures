// DOubt - using my peak element got gives sigterm error 😒🥲

#include<bits/stdc++.h>
using namespace std;
int Peakelement(int arr[],int n){
   	     int low=0,high=n-1;
       while(low<=high){
           int mid=low + (high-low)/2;
           if(arr[mid+1]<arr[mid] && arr[mid]>arr[mid-1]){
               return arr[mid];
           }
           else if(arr[mid+1]>arr[mid] && arr[mid]>arr[mid-1]){
               low=mid+1;
           }
           else if(arr[mid+1]<arr[mid] && arr[mid]<arr[mid-1]){
               high=mid-1;
           }
       }
return -1;
	
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<Peakelement(arr, n);
    return 0;

}