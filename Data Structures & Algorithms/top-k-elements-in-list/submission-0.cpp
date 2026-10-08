class Solution {
public:
     vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> temp;
        vector<int> ret;
        for (const int& i : nums) {
            temp[i]++;
        }
        priority_queue<std::pair<int, int>> queue;
        for (const auto& [num,freq] : temp) {
            queue.push({ freq,num });
        }
        for (int i = 0; i < k; i++) {
            ret.push_back(queue.top().second);
            queue.pop();
        }
        return ret;
    }
};
