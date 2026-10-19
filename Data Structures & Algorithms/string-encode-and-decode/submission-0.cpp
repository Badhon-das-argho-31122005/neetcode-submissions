class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string word:strs){
            int len = word.length();
            encoded_string += to_string(len) + "#" + word;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_list;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j] != '#'){
                j++;
            }
            string length_str = s.substr(i, j-i);
            int length = stoi(length_str);
            string word = s.substr(j+1, length);
            decoded_list.push_back(word);
            i = j+1+length;
        }
        return decoded_list;
    }
};
