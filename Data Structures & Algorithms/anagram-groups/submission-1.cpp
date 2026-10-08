#include <utility>
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> ret;
        for (auto& pair : mp) {
            ret.push_back(std::move(pair.second));
        }
        return ret;
    }
};
