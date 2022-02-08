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