// https://leetcode.com/problems/richest-customer-wealth/
#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth= INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];
            }
            maxwealth=max(maxwealth,wealth);
            
        }
        return maxwealth;
    }
};
int main(){
    vector<vector<int>> accounts ={{1,2,3},{3,2,1}};
    Solution obj;
    cout<<obj.maximumWealth(accounts);
    return 0;

}