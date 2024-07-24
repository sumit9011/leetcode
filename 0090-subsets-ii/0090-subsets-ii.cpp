class Solution {
public:
    void findSub(int index,vector<int> & nums,vector<int>& ds,vector<vector<int>> & ans)
    {
        ans.push_back(ds);

        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1])           //if repeated num then continue
            continue;

            ds.push_back(nums[i]);
            findSub(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());               //so that repeated nums can be identified
        findSub(0,nums,ds,ans);
        return ans;
    }
};