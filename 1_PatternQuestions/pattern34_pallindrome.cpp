#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n-i; space++)
        {
            cout<<"  ";
        }
        int count= i;
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count--;
        }
        int z=2;
        for (int k = 1; k <= i-1; k++)
        {
            cout<<z<<" ";
            z++;
        }
        cout<<endl;
        
        
        
    }
    
}