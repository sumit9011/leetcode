class Solution {
public:
    int myAtoi(string s) {
        
        int i=0;
        bool neg=false;
        long long  ans=0;
        int n= s.length();

        while(i<n && s[i]==' ') 
        i++;
        

        if (i<n && (s[i]=='-' || s[i]=='+'))
        {
            neg = (s[i]=='-');
            i++;
        }
        

        while(i<n && s[i]=='0') 
        i++;
    
        

        while(i<n && isdigit(s[i]))
        {
            int digit=s[i]-'0';
            
            if(ans > (INT_MAX-digit)/10)           //check for overflow
            {
                if(neg)
                return INT_MIN;
                return INT_MAX;
            }    


            ans=ans*10+digit;
            i++;
        }

        if(neg)
        ans=-ans;

        return ans;

    }
};