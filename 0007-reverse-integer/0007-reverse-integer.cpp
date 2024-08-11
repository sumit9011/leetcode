class Solution {
public:
    int reverse(int x) {

        bool flag=false;
        if(x<0)                                // if num is negative
        {
            flag=true;
            x=abs(x);
        }

        int reverse=0;
        int digit;

        while(x>0)
        {
            digit=x%10;

            if(reverse > (INT_MAX-digit)/10)       //check overflow before multiplying by10
            return 0;

            reverse=(reverse*10)+digit;
            x=x/10;
        }
        

        if(flag) return 0-reverse;                // if num is negative
        return reverse;
    }
};