class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int one_cnt=0;
        for(char num:s)
        {
            if(num=='1')
            one_cnt++;
        }

        int zero_cnt=0;
        int ans=0;

        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1') one_cnt--;
            else zero_cnt++;
            ans=max(ans,zero_cnt+one_cnt);
        }

        return ans; 
    }
};