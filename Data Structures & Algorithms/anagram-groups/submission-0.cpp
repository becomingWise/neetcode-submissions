class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());

            anagrams[key].push_back(s);
        }

        vector<vector<string>> result;
        decltype(anagrams)::iterator i = anagrams.begin();
        for(i; i != anagrams.end(); i++) {
            result.push_back(i->second);
        }
        return result;
    }
};
