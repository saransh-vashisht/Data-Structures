#include<bits/stdc++.h>
using namespace std;
int Peakelement(int arr[],int n){
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                    return mid;
            }
            else if(arr[mid]>arr[mid-1]) low=mid+1;
            else high=mid-1;

        }
        else if(mid==0){
            if(arr[mid]>arr[mid+1]) return mid;
            else return 1;

        }
        else if (mid==n-1){
            if(arr[mid]>arr[n-2]) return n-1;
            else return n-2;
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