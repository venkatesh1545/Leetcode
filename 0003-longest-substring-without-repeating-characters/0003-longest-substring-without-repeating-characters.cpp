class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int maxLength = 0, right = 0, left = 0, n = s.length();
        while(right < n) {
            if(st.find(s[right]) == st.end()) {
                st.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            }
            else {
                st.erase(s[left]);
                left++;
            }
        }
        return maxLength;
    }
};