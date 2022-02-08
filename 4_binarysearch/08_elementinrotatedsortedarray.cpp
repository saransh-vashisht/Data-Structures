// https://youtu.be/Id-DdcWb5AU

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int arr[], int n, int key, int low, int high){
  while(low<=high){

    int mid= high+(low-high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key)  high=mid-1;
    else low=mid+1;
  }

    return -1;
}


int Rotation(int arr[], int n, int key){
    int start=0,end=n-1;
  
    while(start<=end){
        int mid=end+(start-end)/2;
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<= arr[next]){
           return mid;

        }
        else if(arr[mid]<=arr[end]) end=mid-1;
        else if(arr[start]<=arr[mid]) start=mid+1;
    }
    return -1;
}
int element(int arr[], int n, int key){
int low=0;
int high = n-1;
if(low==high) {
    if(arr[low]==arr[key]) return low;
    else return -1;}
int smoll=Rotation(arr,n,key);
int ans =Binarysearch(arr,n,key,low,smoll-1);
int ans2=Binarysearch(arr,n,key,smoll+1,high);
if(ans >=0 || ans2>=0){
    if(ans>ans2) return ans;
    else return ans2;
}
return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cin>>key;
   cout<< element(arr,n,key);
   return 0;
}