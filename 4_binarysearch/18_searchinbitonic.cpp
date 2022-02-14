// Explanation-https://youtu.be/IjaP8qt1IYI

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
            else if(arr[mid+1]>arr[mid]) low=mid+1;
            else if(arr[mid-1]>arr[mid]) high=mid-1;

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
int Binarysearch(int arr[], int n, int key, int low, int high){
    
    if(low==high){
        if (arr[low]==key)
        {
            return low;
        }
        else return -1;
        
    }
    while (low<=high)
    {
        
    int mid= (low+high)/2;
    
    if (arr[mid]==key)
    {
        return mid;
    }
    else{

        if(arr[mid]<key){
            low=mid+1;
        }
        else high=mid-1;
    }
    }
 return -1;
}
int BinarySearchreverse(int arr[], int n, int key, int start, int end)
{

    if (start == end)
    {
        if (arr[start] == key)
            return start;
        else
            return -1;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return mid;

    else if (arr[mid] < key)
        return BinarySearchreverse(arr, n, key, start, mid - 1);

    else
        return BinarySearchreverse(arr, n, key, mid + 1, end);
}
int Searching(int arr[], int n, int key){
    int peak=Peakelement(arr,n);
    int result1= Binarysearch(arr,n,key, 0, peak-1);
    int result2=BinarySearchreverse(arr,n,key,peak,n-1);
    if(result1>result2) return result1;
    else return result2;
return peak;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key; cin>>key;
  cout<<  Searching(arr, n,key);
  return 0;
}