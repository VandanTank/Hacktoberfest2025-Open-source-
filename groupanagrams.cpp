class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& wordList) {
        unordered_map<string, vector<string>> signatureMap;
        for (const string& item : wordList) {
            string key = item;
            sort(key.begin(), key.end());
            signatureMap[key].push_back(item);
        }

        vector<vector<string>> groupedAnagrams;
        for (auto& entry : signatureMap) {
            groupedAnagrams.push_back(move(entry.second));
        }
        return groupedAnagrams;
    }
};
