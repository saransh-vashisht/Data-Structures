#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       
         for (int i = 1; i <= n; i++)
         {   int prev=0;
         int prev2=0;
            
             for (int j = 0; j < n; j++)
             {
                 if (j==0 || j==n)      
                 {
                     cout<<1;
                 }
                 else{
                     cout<< prev+prev2;
                 }
                 
             }cout<<endl;
           
         }
         
        

    }
    
}