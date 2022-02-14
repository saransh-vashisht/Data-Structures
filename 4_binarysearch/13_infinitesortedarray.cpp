// look for the solution of the case when upperbound is just crosses it 

#include<bits/stdc++.h>
using namespace std;
int N= 10^5;
int Binarysearch(int arr[], int low, int high , int key){
        if(low==high) {
            if(arr[low]==key) return low;
            else return -1;
        }
        while(low<=high){
            int mid=high+(low-high)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key) low = mid+1;
            else high=mid-1;
        }
        return -1;
}
int infinite(int arr[], int key){
    int low=0; int high=1;
    while(key>arr[high] && high<arr.size()){
        low=high;
        high=2*high;
    }
  int result=  Binarysearch( arr,  low,  high ,  key);
  return result;
}
int main(){
    int count=1;
     arr[N]; for(int i=0;i<N;i++) {arr[i]=count;
    count ++;}
    int key; cin>>key;
  cout<<  infinite(arr,key);
}