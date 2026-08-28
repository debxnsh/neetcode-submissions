class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int lo = 0;
        unordered_set<char>st;
        for (int r =0; r<s.size(); r++){
            
            while (st.count(s[r])){
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);

            lo = max(lo, r-l+1);
        }

        return lo;
    }
};
