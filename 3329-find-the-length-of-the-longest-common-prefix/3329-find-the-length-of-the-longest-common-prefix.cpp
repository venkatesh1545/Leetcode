class Solution {
public:
    
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> prefix;
        for(auto &val : arr1) {
            int num = val;
            while(num > 0) {
                prefix[num]++;
                num = num / 10;
            }
        }
        int maxLength = INT_MIN;
        for(auto &val : arr2) {
            int num = val;
            int len = log10(num) + 1;
            while(num > 0) {
                if(prefix.find(num) != prefix.end()) {
                    break;
                }
                num = num/10;
                len--;
            }
            maxLength = max(maxLength, len);
        }
        return maxLength;
    }
};