class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        cout<<n; 
        while(n>=0 && s[n]==' ') 
        {
            n--;
        }
        cout<<n;

        int cnt=0;
        while(n>=0 && s[n]!=' ')
        {
            cnt++;
            n--;
        }

        return cnt;
    }
};