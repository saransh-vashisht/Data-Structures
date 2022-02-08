#include<iostream>
using namespace std;
int Lastoccurence(int arr[], int n, int key){
    int start =0, end=n-1;
    int result=-1;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(arr[mid]==key){
            result=mid;
            start = mid+1;
        }
        else{

        if(arr[mid]>key) end= mid-1;
        else start= mid+1;
        } 
    }
    return result;
}
int Firstoccurence(int arr[], int n, int key){
    int low =0;
    int high=n-1;
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
int Countofelement(int arr[], int n, int key){
    if((n-1)==0){
        if(arr[0]==key) return 1;
        else return 0;
    }
    int Count =  Lastoccurence(arr, n ,key) - Firstoccurence(arr, n , key) +1;
   
    return Count;

}
int main(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    int key; cin>>key;

    cout<<Countofelement(arr, n , key);
    return 0;
}