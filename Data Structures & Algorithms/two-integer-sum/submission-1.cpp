class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nummap;
        for(int i=0; i<nums.size(); i++){
            int complement = target-nums[i];
            if(nummap.count(complement) > 0){
                return {nummap[complement], i};
            }
            nummap[nums[i]] = i;
        }
        return {};
        
    }
};
