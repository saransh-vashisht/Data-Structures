#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for (int row = 1; row <= n; row++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout<<count<<" ";
            count++;
        }cout<<endl;

        
    }
    return 0;

    
}