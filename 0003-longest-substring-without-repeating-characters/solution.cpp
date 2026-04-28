class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1){
            return s.size();
        }

        unordered_set<int> st;
        int start = 0;
        int end = 0;
        int ans = 0;
         while (end < s.size()) {
            if (st.find(s[end]) == st.end()) {
                st.insert(s[end]);
                ans = max(ans, (int)st.size());
                end++;
            } else {
                st.erase(s[start]);
                start++;
            }
        }
    return ans;
    }
};
