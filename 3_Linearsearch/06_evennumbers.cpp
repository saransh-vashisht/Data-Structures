// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
     int digits2(int a){
         if(a<0){
            a=a*-1;
        }
       
        return (int)(log10(a))+1;
    }
    int digits(int a){
        if(a<0){
            a=a*-1;
        }
        if(a==0){
            return 1;
        }
        int count=0;
        while(a>0){
            count++;
            a=a/10;
        }
        return count;
    }
    bool evennumber(int num){
        int digitcount=digits2(num);
        if(digitcount%2==0){
            return true;
        }
        else return false;
    }
    int findNumbers(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            if(evennumber(nums[i])){
                    result++;
            } 
        }
        return result;
    }
};
int main(){
    
        vector<int> nums={12,345,2,6,7896};
         Solution obj;
       int result=  obj.findNumbers(nums);
        cout<<result;
        return 0;
    
}