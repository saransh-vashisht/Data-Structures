#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        // space print karlo
        for (int space = n-i; space > 0; space--)
        {
            cout<<" "; 
        }

        // star print karlo
        for (int  j = 1; j <= i; j++)
        {
            cout<<"*";

        }cout<<endl;

        
        
    }
    return 0;
}