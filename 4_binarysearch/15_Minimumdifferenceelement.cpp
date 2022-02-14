#include<bits/stdc++.h>
using namespace std;
int Minimum(int arr[], int n, int key){
    int low=0;int high=n-1;
    if(low==high){
        if(arr[low]==key) return arr[low];
        else return -1;
    }
    while(low<=high){
        int mid=high+(low-high)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    
    if((abs(arr[low]-key))<(abs(arr[high]-key))) return arr[low];
   else return arr[high];
   return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;cin>>key;
    cout<<Minimum(arr,n,key);
    return 0;
}