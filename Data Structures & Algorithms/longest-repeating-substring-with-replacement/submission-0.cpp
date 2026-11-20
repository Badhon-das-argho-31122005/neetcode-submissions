class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> seen(26, 0);
        int left = 0;
        int max_len = 0;
        int max_freq =0;
        for(int right = 0; right<s.length(); right++){
            seen[s[right]-'A']++;
            max_freq = max(max_freq, seen[s[right]-'A']);
            while((right-left+1)-max_freq > k){
                seen[s[left] -'A']--;
                left++;
            }
            max_len = max(max_freq, right-left+1);
        }
        return max_len;
    }
};
