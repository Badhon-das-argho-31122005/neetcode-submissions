class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty() || s.length() < t.length()) return "";
        unordered_map<char, int> countt;
        unordered_map<char, int> window;
        for(char c:t){
            countt[c]++;
        }
        int have =0;
        int need = countt.size();
        int min_len = INT_MAX;

        int start_idx = 0;
        int left = 0;

        for(int right = 0; right<s.length(); right++){
            char c = s[right];
            window[c]++;

            if(countt.count(c) && window[c] == countt[c]){
                have++;
            }
            while(have == need){
                if((right - left + 1) < min_len){
                    min_len = right-left+1;
                    start_idx = left;
                }
                char leftchar = s[left];
                window[leftchar]--;
                
                if(countt.count(leftchar) && window[leftchar] < countt[leftchar]) {
                    have--;
                }
                left++;
            }
        }
        return (min_len == INT_MAX) ? "" : s.substr(start_idx, min_len);
    }
};
