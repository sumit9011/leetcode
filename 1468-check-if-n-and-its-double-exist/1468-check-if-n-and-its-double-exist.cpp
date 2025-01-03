class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=i;
        }

        for(int i=0;i<n;i++)
        {
            if(mp.find(2*arr[i])!=mp.end() && mp[2*arr[i]]!=i)
            return true;
        }

        return false;
    }
};