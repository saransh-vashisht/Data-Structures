#include<iostream>
using namespace std;
// int SearchinMatrix(int arr[][], int n , int m, int key){

// }
int main(){
    int n,m;cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    { cout<<"Enter the elements for row "<<i <<": ";
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Enter the element to be found: ";
    int key;
    cin>>key;
    // SearchinMatrix(arr, n,m,key);
    bool ans = false;
    int a,b;
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==key){ ans=true;
                        a=i;
                        b=j;
            } 
        }
        
    }
    if(ans) cout<<"Element is present at row: "<<a<<" column "<<b;
   
    else cout<<"Element is not present in the matrix";
    return 0;
    
}