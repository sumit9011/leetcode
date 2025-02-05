class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;

        int cnt=0;
        int i=-1;
        int j=-1;
    
        for(int k=0;k<s1.size();k++)
        {
            if(s1[k]!=s2[k])
            {
            cnt++;
            if(i==-1) i=k;
            else if(j==-1) j=k;
            }
  
        }

        if(cnt==2 && s1[i]==s2[j]  && s1[j]==s2[i]) return true;
        return false;

    }
};