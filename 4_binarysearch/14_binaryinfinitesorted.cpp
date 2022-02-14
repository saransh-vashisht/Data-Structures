#include<bits/stdc++.h>
using namespace std;
int N=10^5;
int Firstoccurence(int arr[], int low, int high, int key){
    int result=-1;
    while(low<=high){
        int mid=high+(low-high)/2;
        if(arr[mid]==key) {
            result=mid;
            high=mid-1;
        }
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return result;
}
int Firstone(int arr[], int key){
    int low=0; int high=1;
    
    while(key>arr[high]){
            low=high;
            high=high*2;
    }
        cout<<low<<endl;
        cout<<high<<endl;
   int result= Firstoccurence(arr, low,high,key);
    return result;
}
int main(){
    
    int arr[N];
    for(int i=0;i<11;i++) arr[i]=0;
    for (int i = 11; i < N; i++)
    {
        arr[i]=1;
    }
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    // int key;cin>>key;
    cout<<Firstone(arr, 1);
    return 0;
}