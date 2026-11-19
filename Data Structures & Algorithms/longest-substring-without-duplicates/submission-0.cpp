class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0;
        int max_len = 0;
        for(int right =0; right < s.length(); right++){
            while(seen.count(s[right]) > 0){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};
