class Solution {
public:

    string encode(vector<string>& strs) {
        string tmp ="";
        for (int i = 0; i < strs.size();i++) {
            tmp += strs[i];
            tmp += "-->";
        }
        return tmp;
    }

    vector<string> decode(string s) {
        vector<string> tmp;
        size_t pos = 0, next_pos = 0;
        string delimiter = "-->";
        while ((next_pos = s.find(delimiter, pos)) != string::npos) {
            tmp.push_back(s.substr(pos, next_pos - pos));

            pos = next_pos + delimiter.length();
        }
        return tmp;
    }
};
