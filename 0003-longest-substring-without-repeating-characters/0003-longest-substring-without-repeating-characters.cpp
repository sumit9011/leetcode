class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int l=0;
        int ans=0;

        for(int r=0;r<s.size();r++)
        {
            while(st.find(s[r])!=st.end())
            {
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            ans=max(ans,r-l+1);
        }

        return ans;
    }
};