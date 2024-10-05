
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        string ans="";

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        vector<pair<char,int>> temp(mp.begin(),mp.end());

        sort(temp.begin(),temp.end(),[](const pair<char,int> a, const pair<char,int> b)
        {
            return b.second< a.second;
        });

        for(auto it:temp)
        {
            ans=ans+string(it.second,it.first);
        }

        return ans;
    }
};