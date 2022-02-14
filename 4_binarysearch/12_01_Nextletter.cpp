// case if element is present in the array 
// fails if element is not present also in the case of repeated elements
#include<bits/stdc++.h>
using namespace std;
int Nextelement(char arr[], int n, char key){
    int low=0,high=n-1;
    if(low==high){
        return -1;
    }

    while(low<=high){
        int mid=high+(low-high)/2;
        if(arr[mid]==key){
            if(mid==n-1) return -1;
            return mid+1;
        }
        if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
 int main(){
     int n; cin>>n;
     char arr[n];
     for(int i=0;i<n;i++) cin>>arr[i];
     char key;cin>>key;
     int result=Nextelement(arr,n,key);
     if(result==-1) cout<<"Next element is not present";
     else  cout<<arr[result];
     return 0;
 }