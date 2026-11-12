class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int a_index = 0; a_index < nums.size(); a_index++){
            if(a_index > 0 && nums[a_index] == nums[a_index - 1]){
                continue;
            }
            int left = a_index + 1;
            int right = nums.size() - 1;
            while(left < right){
                int sum = nums[left] + nums[right];
                if(sum == -nums[a_index]){
                    result.push_back({nums[a_index], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                    while(left < right && nums[right] == nums[right+1]){
                        right--;
                    }
                }
                else if(sum > -nums[a_index]){
                    right--;
                }
                else if(sum < -nums[a_index]){
                    left++;
                }
            }
        }
        return result;
    }
};
