#include<iostream>
using namespace std;
int Lastoccurence(int arr[], int n, int key){
    int low =0;
    int high=n-1;
    if(low==high){
        if (arr[low]==key)
        {
            return low;
        }
        else return -1;
        
    }
    int result=-1;
    while (low<=high)
    {
        
    int mid= (low+high)/2;
    
    if (arr[mid]==key)
    {
        result= mid; 
       low=mid+1;
    }
    else{

        if(arr[mid]<key){
            low=mid+1;
        }
        else high=mid-1;
    }
    }
 return result;
}
int Firstoccurence(int arr[], int n, int key){
    int low =0;
    int high=n-1;
    if(low==high){
        if (arr[low]==key)
        {
            return low;
        }
        else return -1;
        
    }
    int result=-1;
    while (low<=high)
    {
        
    int mid= (low+high)/2;
    
    if (arr[mid]==key)
    {
        result= mid; 
        high=mid-1;
    }
    else{

        if(arr[mid]<key){
            low=mid+1;
        }
        else high=mid-1;
    }
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
    cout<<Firstoccurence(arr,n,key)<<endl;
    cout<<Lastoccurence(arr,n,key);
    return 0;
}