#include<iostream>
using namespace std;
void reversearray(int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
   
    
}
void PrintArray(int arr[], int n){
      for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    reversearray(arr,n);
  
    PrintArray(arr,n);

    return 0;

    
    
}