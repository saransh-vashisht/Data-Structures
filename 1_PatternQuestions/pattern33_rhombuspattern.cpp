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
            cout<<"*";
        }cout<<endl;
        
        
    }
    
}