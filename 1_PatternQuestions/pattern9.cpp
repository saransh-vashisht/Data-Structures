// with variable
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        int count = row;
        for(int column=1;column<=row;column++){
            cout<<count<<" ";
            count++;

        }
    cout<<endl;
    }
    return 0;
}