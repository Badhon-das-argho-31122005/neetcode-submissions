class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        
        unordered_set<int> seen(nums.begin(), nums.end());
        
        int longest_len = 0;
        for(int num:nums){
            if(seen.count(num-1)==0){
                int current_num = num;
                int current_len = 1;
                while(seen.count(current_num + 1) > 0){
                    current_num += 1;
                    current_len += 1;
                }
                longest_len = max(longest_len, current_len);
            }
        }
        return longest_len;

    }
};
