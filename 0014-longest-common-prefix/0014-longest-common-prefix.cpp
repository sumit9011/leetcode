class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
        return "";

        sort(strs.begin(),strs.end());

        string first=strs.front();
        string last=strs.back();

        int minLen=min(first.size(),last.size());

        int i=0;

        while(i<minLen && first[i]==last[i])
        {
            i++;
        }

        if(i==0) return "";
        else return first.substr(0,i);
    }
};