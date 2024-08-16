class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //better

        unordered_map<int, int> mp;

        for(int i=0;i<nums.size();i++)
        {
            int num = nums[i];

            int moreNeeded = target-num;
            if(mp.find(moreNeeded) != mp.end())
            {
                return {mp[moreNeeded],i};
            }

            mp[num]=i;
        }

        return {-1,-1};
    }
};