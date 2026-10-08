class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> countmap;
        for(int i=0; i<s.length(); i++){
            countmap[s[i]]++;
            countmap[t[i]]--;
        }
        for(auto& pair:countmap){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};
