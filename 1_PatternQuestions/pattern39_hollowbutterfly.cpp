#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
              if(j==1 || j==i) cout<<"* ";
            else cout<<"  ";
        }
        for(int k=1;k<=(n-i)*2;k++){
           
            cout<<"  ";
        }
       
        for (int l = 1; l <= i; l++)
        {
            if(l==1 || l==i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
        
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if(j==1 || j==n-i+1) cout<<"* ";
            else cout<<"  ";
        }
        for(int k=1;k<=(i-1)*2;k++){
            cout<<"  ";
        }
       
        for (int l = 1; l <= n-i+1; l++)
        {
              if(l==1 || l==n-i+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
        
    }
   
   
  
    
}