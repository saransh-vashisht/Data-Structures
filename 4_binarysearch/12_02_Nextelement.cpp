#include<iostream>
using namespace std;
int Nextelement(char arr[], int n, char key){
    int low=0,high=n-1;
    if(low==high){
        return -1;

    }
    int result;
    while(low<=high){
        int mid=high+(low-high)/2;
          if(arr[mid]==key){ 
            //    e, e, e, e, n ]
            // target = 'e'
            // output = 'n'
            // but according to your logic it will be 'e'
            // so the below logic fails for this testcase

            //   if(mid==n-1) return -1;
            //   return mid+1;

            // optimization 
            low=mid+1;
          }
       if(arr[mid]>key){
                // result=min(result,arr[mid]);
                result=mid;
                high=mid-1;
        }
        else low=mid+1;
    }
    return result;
}
int main(){
    int n; cin>>n;
    char arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    char key;cin>>key;
   int result=Nextelement(arr,n,key);
     if(result==-1) cout<<"Next element is not present";
     else  cout<<arr[result];
     return 0;

}