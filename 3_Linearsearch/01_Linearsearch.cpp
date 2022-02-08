#include<iostream>
using namespace std ;
int linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key) return i;
    }
    
        return -1;
    
}
int main(){
    int n;cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the  element to be found:";
    cin>>key;
  int result=  linearsearch( arr,  n,  key);
  if(result==-1) cout<<"The given number is not present in the array";
  else cout<<"The given number is present at the index: "<<result;
  return 0;
}