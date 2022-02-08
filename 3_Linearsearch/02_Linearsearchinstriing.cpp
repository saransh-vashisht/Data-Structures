#include<iostream>
using namespace std;
int linearsearch(string str, char c){
     if(str.length()==0) {
                return -1;
            }
    for (int i = 0; i < str.length(); i++)
    {
        if(c==str[i]) return i;
        
    }
    return -1;
    
}
int main(){
    string str;
    cin>>str;
    char c;
    cin>>c;
  int result=  linearsearch(str, c);
      if(result==-1) cout<<"The given character is not present in the string";
  else cout<<"The given character is present at the index: "<<result;
  return 0;
}