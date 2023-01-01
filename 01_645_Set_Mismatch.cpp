// https://leetcode.com/problems/set-mismatch/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v1;
        int size = nums.size();
        int j = 0;
        if(nums[0]==nums[1]){
            v1.push_back(nums[0]);
            v1.push_back(nums[1]-1);
            return v1;
        }
        for(int i=0; i<size; i++){
            
            if(nums[i]==nums[i+1]){
                v1.push_back(nums[i]);
                v1.push_back(nums[i]+1);
                break;               
            }
        }
        return v1;
    }
}s1;
int main(){
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(3);
v.push_back(5);

vector<int> ans = s1.findErrorNums(v);
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}
return 0;
}