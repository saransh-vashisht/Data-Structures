// https://youtu.be/uiz0IxPCUeU
#include<bits/stdc++.h>
using namespace std;
int Ceil(int arr[], int n, int key){
    int low=0,high=n-1;
    if(low==high){
        if(arr[low]==key) return arr[low];
        
    }
    int result=INT_MAX;
    while(low<=high){
        int mid=high+(low-high)/2;
        if(arr[mid]==key) return arr[mid];
        else if(arr[mid]>key){
                // result=min(result,arr[mid]);
                result=arr[mid];
                high=mid-1;
        }
        else low=mid+1;
    }
    return result;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;cin>>key;
    cout<<Ceil(arr,n,key);
    return 0;
}