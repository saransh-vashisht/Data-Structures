#include<iostream>
using namespace std; 
// doubt in last occurence
int Lastoccurence(int arr[], int n, int key, int start, int end){
    if(start==end){
        if(arr[start]==key) return start;
        else return end;

    }
    while (start<=end){
    int mid= start+ (end-start)/2;
    if (arr[mid] == key && key < arr[mid + 1] )
            return mid;


else if(arr[mid]<key) return Lastoccurence(arr, n, key,mid+1, end);
else  return Lastoccurence(arr,n,key,start, mid-1);
    }
return -1;

}
int last(int arr[],  int n ,int key,int low, int high )
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || key < arr[mid + 1]) && arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            return last(arr, low, (mid - 1), key, n);
        else
            return last(arr, (mid + 1), high, key, n);
    }
    return -1;
}
int Firstoccurence(int arr[], int n, int key, int start, int end){
    if(start==end){
        if(arr[start]==key) return start;
        else return end;

    }
    // int result =-1;
    int mid= start+ (end-start)/2;
    if(arr[mid]==key && arr[mid-1]<key){
        return mid;
        // Firstoccurence(arr,n,key,start,mid-1);
    }


else if(arr[mid]<key) return Firstoccurence(arr, n, key,mid+1, end);
else  return Firstoccurence(arr,n,key,start, mid-1);

return -1;

}
int main(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key ; cin>>key;
    int start=0,end=n-1; 
   cout<< Firstoccurence(arr, n , key, start,end)<<endl;
   cout<<Lastoccurence(arr,n,key,start,end);
    return 0;
}
