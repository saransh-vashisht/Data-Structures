// https://youtu.be/5cx0xerA8XY

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Floor(int arr[], int n, int key){
    int low =0;
    int high=n-1;
    if(low==high){
        if (arr[low]==key)
        {
            return arr[low];
        }
        else return -1;
        
    }
    int result=INT_MIN;
    while (low<=high)
    {
        
    int mid= (low+high)/2;
    
    if (arr[mid]==key )
    {
return arr[mid];
    }



       else if(arr[mid]<=key){
        result= max(result,arr[mid]);
        low=mid+1;
        }
        else high=mid-1;
    
    }
 return result;
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<Floor(arr,n,key)<<endl;
  
}