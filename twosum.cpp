#include <iostream>
#include <vector>

int main(){
    class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map <int,int> valuemap;
            vector<int> result;        
            for (int i=0;i<nums.size();++i){
                valuemap.insert(pair <int, int> (nums[i],i));
            }
            
            for (int j=0;j<nums.size();++j){
                if (valuemap.find(target-nums[j])!=valuemap.end()){
                    result.push_back(j);
                    //result.push_back(valuemap[nums[j]]);
                };
            }
            
            return result;
            
        }
    };
}