#include<bits/stdc++.h>
using namespace std;
bool isValid(int arr[], int n, int k, int mid){
    int student=1;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        if(sum>mid){
            student++;
            sum=arr[i];
        }
        if(student>k){
            return false;
        }
    }
    return true;
    
}
int Minimum(int arr[], int n, int key, int start , int end){
   
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,key,mid)==true){
            result=mid;
            end=mid-1;
        }
        else start=mid+1;
    }
    return result;

}
int main(){
    int n; cin>>n;
    int arr[n];
    int start=0;
    int end=0;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        start=max(start,arr[i]);
        end+=arr[i];
    }
  
    int k;
    cin>>k;
    cout<<Minimum(arr,n,k,start,end);
    return 0;
    
}