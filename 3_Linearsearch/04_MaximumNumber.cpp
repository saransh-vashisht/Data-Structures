#include<iostream>
#include<climits>
using namespace std;
int MaximumNumber(int arr[], int n){
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxi) maxi=arr[i];
        
    }
    return maxi;
    
}
int MinimumNumber(int arr[], int n){
    int mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<mini) mini=arr[i];
        
    }
    return mini;
    
}
int main(){
    int n;
    cin>>n;
    cout<<"Enter the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Biggest number in the array is "<<MaximumNumber(arr, n)<<endl;
    cout<<"Smallest number in the array is "<<MinimumNumber(arr, n)<<endl;
    return 0;
    
}