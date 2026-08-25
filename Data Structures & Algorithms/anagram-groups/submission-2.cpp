class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string word : strs) {

            vector<int> count(26, 0);

            for (char c : word) {
                count[c - 'a']++;
            }

            string key = "";

            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }

            mp[key].push_back(word);
        }

        vector<vector<string>> result;

        for (auto &p : mp) {
            result.push_back(p.second);
        }

        return result;
    }
};