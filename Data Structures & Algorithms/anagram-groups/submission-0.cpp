class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrammap;
        for(string word:strs){
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            anagrammap[sorted].push_back(word);
        }
        vector<vector<string>> result;
        for(auto& pair:anagrammap){
            result.push_back(pair.second);
        }
        return result;
        
    }
};
