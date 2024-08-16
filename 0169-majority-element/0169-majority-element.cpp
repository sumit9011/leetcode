class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //approach-2
        map<int,int> mp;
        int maj=nums.size()/2;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(auto x: mp)
        {
            if(x.second > maj)
            return x.first;
        }

        return -1;
    }
};