#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<j<<" ";
        }

        for (int k = 1; k <= (i-1)*2; k++)
        {
            cout<<"* ";
        }
        for (int x = 1; x <= n-i+1; x++)
        {
            cout<<n-i+1<<" ";
        }
        cout<<endl;
        
        
        
    }
    return 0;
}