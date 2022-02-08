#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Rotation(int arr[], int n){
    int low=0, high=n-1;
    if(arr[low]<=arr[high]) return 0;
    while(low<=high){
        int mid= high+(low-high)/2;
        int prev=(mid+n-1)%n;
        int next= (mid+1)%n;
    if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
        return mid;
    }
     if(arr[low]<=arr[mid]) low=mid+1; 
    else if (arr[mid]<=arr[high])high=mid+1;
    }
    return -1;
}
int main(){
    int n; cin>>n;
    int arr[n];
    int key=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    cout<<Rotation(arr, n);
    return 0;
}