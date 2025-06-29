class Solution {
public:
    const int mod = 1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        if(!is_sorted(nums.begin(), nums.end())) {
            sort(nums.begin(), nums.end());
        }
        int n = nums.size();
        vector<int> seq(n+1, 1);
        for(int i = 1; i <= n; i++) {
            seq[i] = (seq[i-1] * 2) % mod;
        }
        int l = 0, r = n-1;
        int ans = 0;
        while(l <= r) {
            if(nums[l] + nums[r] <= target) {
                ans = (ans + seq[r-l]) % mod;
                l++;
            }
            else r--;
        }
        return ans;
    }
};