class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
       
       for(auto it:mp)
       {
        if(it.second%2==1)
        return false;
       }

       return true;
    }
};