// https://youtu.be/W3-KgsCVH1U

#include<iostream>
using namespace std;
int Binarysearch(int arr[], int n, int key){
    int low =0;
    int high=n-1;
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
    
    if (arr[mid]==key )
    {
        return mid;
    }
    else if(mid>=low &&arr[mid+1]==key) return mid+1;
    else if(mid<=high && arr[mid-1]==key) return mid-1;
    else{

        if(arr[mid]<key){
            low=mid+2;
        }
        else high=mid-2;
    }
    }
 return -1;
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
    cout<<Binarysearch(arr,n,key);
}