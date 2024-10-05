class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s==goal)
        return true;

        int n1=s.size();
        int n2= goal.size();

        if(n1!=n2)
        return false;

        for(int i=0;i<n1-1;i++)
        {
            if(s.substr(i+1,n1-i)+s.substr(0,i+1)==goal)
            return true;
        }

        return false;
    }
};