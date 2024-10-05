class Solution {
public:
    bool isIsomorphic(string s, string t) {

        //Approach 1
        // only one map does not work
        //two way mapping is required
        
        map<char,char> mp1;
        map<char,char> mp2;

        int n=s.size();

        for(int i=0;i<n;i++)
        {
            char s_char=s[i];
            char t_char=t[i];

            if(mp1.find(s_char)!=mp1.end())
            {
                if(mp1[s_char]!=t_char) return false;
            }
            else
            {
                mp1[s_char]=t_char;
            }


            if(mp2.find(t_char)!=mp2.end())
            {
                if(mp2[t_char]!=s_char) return false;
            }
            else
            {
                mp2[t_char]=s_char;
            }
        }

        return true;
       
    }
};