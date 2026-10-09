class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> nummap;
        for(int num:nums){
            nummap[num]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& pair:nummap){
            bucket[pair.second].push_back(pair.first);
        }
        vector<int> result;
        for(int i=bucket.size()-1; i>=0; i--){
            for(int num:bucket[i]){
                result.push_back(num);
            }
            if(result.size() == k){
                return result;
            }
        }
        return result;
    }
};
