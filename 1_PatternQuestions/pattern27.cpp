#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int space = 1; space <= n-i; space++)
        {
            cout<<"  ";
        }
        // print first triangle
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        // print second triangle
        for (int k = 1; k <= i-1; k++)
        {
            cout<<i-k<<" ";
        }
        cout<<endl;
        
        
        
    }
    
}