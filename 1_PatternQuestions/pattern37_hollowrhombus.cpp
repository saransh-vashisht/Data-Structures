#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n-i; space++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= n; k++)
        {
            if(i==1 || i==n|| k==1 || k==n) cout<<"*";
            else cout<<" ";
        }cout<<endl;
        
        
    }
    
}