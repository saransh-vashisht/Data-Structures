#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n-i+1; space++)
        {
            cout<<"* ";
        }
        for (int j = 2; j <= (2*i)-1; j++)
        {
            cout<<"  ";
        }
           for (int k = 1; k <= n-i+1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= i; space++)
        {
            cout<<"* ";
        }
        for (int j = 2; j <= (2*(n-i+1))-1; j++)
        {
            cout<<"  ";
        }
           for (int k = 1; k <= i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
    
}