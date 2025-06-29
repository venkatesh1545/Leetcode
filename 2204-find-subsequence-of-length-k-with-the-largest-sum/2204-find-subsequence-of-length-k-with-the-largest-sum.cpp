class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> indexed;
        for(int i = 0; i < n; i++) {
            indexed.push_back({nums[i], i});
        }
        sort(indexed.begin(), indexed.end(), greater<pair<int, int>>());
        vector<pair<int, int>> topk(indexed.begin(), indexed.begin() + k);
        sort(topk.begin(), topk.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });
        vector<int> res;
        for(auto &p : topk) {
            res.push_back(p.first);
        }
        return res;
    }
};