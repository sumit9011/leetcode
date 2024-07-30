class Solution {
public:
    int minimumDeletions(string s) {

        int size=s.length();
        int count_b=0;
        int min_deletion=0;

        for(int i=0;i<size;i++)
        {
            if(s[i]=='a')
            {
                min_deletion=min(min_deletion+1,count_b);
            }
            else if(s[i]=='b')
            {
                count_b++;
            }

        }

        return min_deletion;
        
    }
};