#include<iostream>
using namespace std;
int BinarySearchRecursive(int arr[], int n, int key, int low, int high)
{
   // int mid = (low + high) / 2;
    // THis way of using int mid will avoid integer overflow in the statement
    int mid= high+ (low-high)/2;
    if (arr[mid] == key)
        return mid;

    else if (arr[mid] < key)
      return  BinarySearchRecursive(arr, n, key, mid + 1, high);

    else
      return  BinarySearchRecursive(arr, n, key, low, mid - 1);

    
    return -1;
}
int BinarySearch(int arr[], int n, int key, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return mid;

    else if (arr[mid] < key)
        return BinarySearch(arr, n, key, start, mid - 1);

    else
        return BinarySearch(arr, n, key, mid + 1, end);
}
int Searching(int arr[],int n,int key, int start, int end){
    if(start==end) 
        if(arr[start]==key) return start;
        else return -1;

   int ans=0;
    if(arr[start]>arr[end]){
            ans= BinarySearch(arr, n , key, start,end);
    }
    else ans=BinarySearchRecursive(arr,n, key, start,end);

    return ans;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;cin>>key;
    int start=0,end=n-1;
     cout<< Searching(arr, n,key,start,end);
}