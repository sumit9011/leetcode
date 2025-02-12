class Solution {
public:
    int calculate_sum(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int ans=-1;

        for(int i=0;i<n;i++)
        {
            int val=calculate_sum(nums[i]);
            auto it=mp.find(val);

            if(it!=mp.end())
            {
                ans=max(ans,nums[i]+nums[it->second]);
                if(nums[i]>nums[it->second]) mp[it->first]=i;
                
            }
            else
            {
                mp[val]=i;
            }
        }

        return ans;
    }
};