// https://youtu.be/VS0BcOiKaGI
#include<bits/stdc++.h>
using namespace std;
pair<int,int> Binarysearch(vector<vector<int>> vect,int row, int column,int key ){
    pair<int,int> result={-1,-1};

    int i=0,j=column-1;
    while(i<row &&i>=0 && j<column && j>=0){
    if(vect[i][j]==key) {
       result.first=i;
       result.second=j;
       return result;
    }
    else if(vect[i][j]>key) j--;
    else if(vect[i][j]<key) i++;
}
return result;
}
int main(){
    vector<vector<int>> vect={
                    {10,20,30,40},
                    {24,25,35,45},
                    {27,29,37,44},
                    {32,33,39,50}
    };
    int key; cin>>key;
   pair<int,int> result= Binarysearch(vect,4,4,key);
  cout<<result.first<<"  "<<result.second<<endl;
  return 0;
  
}