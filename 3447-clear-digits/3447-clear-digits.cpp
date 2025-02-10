class Solution {
public:
    string clearDigits(string s) {

       stack<char> st;
       string ans="";

       for(int i=0;i<s.size();i++)
       {
        if(isdigit(s[i]))
        st.pop();

        else
        st.push(s[i]);
       } 

       while(!st.empty())
       {
        ans=st.top()+ans;
        st.pop();
       }

       return ans;

    }
};